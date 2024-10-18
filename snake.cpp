#include <iostream>
#include <time.h>
#include <cstdlib>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <pthread.h>
#include <termios.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define MAX 100
#define WIDTH 77
#define HEIGHT 72
#define INIT_SNAKE_LENGTH 4
#define FOOD 1

#define WALL -2
#define SNAKE -1
#define NOTHING 0

#define RIGHT 0
#define UP 1
#define LEFT 2
#define DOWN 3
#define EXIT -1

static int dx[5] = {1, 0, -1, 0};
static int dy[5] = {0, -1, 0, 1};

int input = RIGHT;
int item = NOTHING;

// MacOS 용 gotoxy 함수 대체
void gotoxy(int x, int y){
    printf("\033[%d;%dH", y, x);
}

// MacOS 용 clearScreen 함수 대체
void clearScreen(){
    printf("\033[H\033[J");
}

int oppositeDirection(int input1, int input2){
    if(input1 == LEFT && input2 == RIGHT) return 1;
    if(input1 == RIGHT && input2 == LEFT) return 1;
    if(input1 == UP && input2 == DOWN) return 1;
    if(input1 == DOWN && input2 == UP) return 1;

    return 0;
}

int getch(void) {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

int kbhit(void) {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

struct Coordinate{
    int x, y;
};

class snake{
    private:
        int length;
        Coordinate body[WIDTH * HEIGHT];
        int direction;
        int ground[MAX][MAX];
        int foodCounter;
    public:
        void initGround();
        void initSnake();
        void updateSnake(int delay);
        void updateFood();
        void firstDraw();
        int getFoodCounter();
};

void snake::initGround(){
    int i, j;
    for(i = 0; i < MAX; i++)
        for(j = 0; j < MAX; j++)
            ground[i][j] = 0;

    for(i = 0; i <= WIDTH + 1; i++){
        ground[0][i] = WALL;
        ground[HEIGHT + 1][i] = WALL;
    }
    for(i = 0; i <= HEIGHT + 1; i++){
        ground[i][0] = WALL;
        ground[i][WIDTH + 1] = WALL;
    }
}

void snake::initSnake(){
    length = INIT_SNAKE_LENGTH;
    body[0].x = WIDTH / 2;
    body[0].y = HEIGHT / 2;
    direction = input;
    foodCounter = 0;

    int i;
    for(i = 1; i < length; i++){
        body[i].x = body[i - 1].x - dx[direction];
        body[i].y = body[i - 1].y - dy[direction];
    }

    for(i = 0; i < length; i++){
        ground[body[i].y][body[i].x] = SNAKE;
    }
}

void snake::updateSnake(int delay){
    int i;
    Coordinate prev[WIDTH * HEIGHT];
    for(i = 0; i < length; i++){
        prev[i].x = body[i].x;
        prev[i].y = body[i].y;
    }

    if(input != EXIT && !oppositeDirection(direction, input))
        direction = input;

    body[0].x = prev[0].x + dx[direction];
    body[0].y = prev[0].y + dy[direction];

    if(ground[body[0].y][body[0].x] < NOTHING){
        item = -1;
        return;
    }

    if(ground[body[0].y][body[0].x] == FOOD){
        length++;
        item = FOOD;
    } else{
        ground[body[length - 1].y][body[length - 1].x] = NOTHING;
        item = NOTHING;
        gotoxy(body[length - 1].x, body[length - 1].y);
        cout << " ";
    }

    for(i = 1; i < length; i++){
        body[i].x = prev[i - 1].x;
        body[i].y = prev[i - 1].y;
    }

    gotoxy(body[1].x, body[1].y);
    cout << "+";
    gotoxy(body[0].x, body[0].y);
    cout << "O";

    for(i = 0; i < length; i++){
        ground[body[i].y][body[i].x] = SNAKE;
    }

    usleep(delay * 1000); // Sleep for delay milliseconds
}

void snake::updateFood(){
    int x, y;
    do{
        x = rand() % WIDTH + 1;
        y = rand() % HEIGHT + 1;
    } while(ground[y][x] != NOTHING);

    ground[y][x] = FOOD;
    gotoxy(x, y);
    cout << "F";
}

void snake::firstDraw(){
    clearScreen();
    for(int i = 0; i <= WIDTH + 1; i++){
        gotoxy(i, 0);
        cout << "#";
        gotoxy(i, HEIGHT + 1);
        cout << "#";
    }
    for(int i = 0; i <= HEIGHT + 1; i++){
        gotoxy(0, i);
        cout << "#";
        gotoxy(WIDTH + 1, i);
        cout << "#";
    }
}

int snake::getFoodCounter(){
    return foodCounter;
}

void *userInput(void *arg){
    while(input != EXIT){
        if(kbhit()){
            switch(getch()){
                case 'w':
                    input = UP;
                    break;
                case 's':
                    input = DOWN;
                    break;
                case 'a':
                    input = LEFT;
                    break;
                case 'd':
                    input = RIGHT;
                    break;
                case 'q':
                    input = EXIT;
                    break;
            }
        }
    }
    return NULL;
}

int main(){
    int delay = 50;
    srand(time(NULL));
    snake nagini;
    nagini.initGround();
    nagini.initSnake();
    nagini.updateFood();
    nagini.firstDraw();

    pthread_t inputThread;
    pthread_create(&inputThread, NULL, userInput, NULL);

    do{
        nagini.updateSnake(delay);
        if(item == FOOD)
            nagini.updateFood();
    } while(item >= 0 && input != EXIT);

    gotoxy(WIDTH / 2 - 5, HEIGHT / 2 - 2);
    cout << "GAME OVER";
    gotoxy(WIDTH / 2 - 8, HEIGHT / 2 + 2);
    cout << "Your score is " << nagini.getFoodCounter() - 1 << "!" << endl;
    gotoxy(WIDTH / 2, HEIGHT / 2);

    getch();
    return 0;
}
