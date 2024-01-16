//세로읽기

#include <iostream>
using namespace std;
int const ROW = 5;
int const COL = 16;
char arr[ROW][COL] = { 0, };
bool endOfLine[ROW] = {false,};

int main(){

    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            arr[i][j] = getchar();
            if(arr[i][j] == '\n'){
                endOfLine[i] = true;
                break;
            }
        }
    }

    for(int i = 0; i < COL; i++){
        for(int j = 0; j < ROW; j++){
            if(arr[j][i] != 0 && arr[j][i] != '\n') cout << arr[j][i];
        }
    }
    cout << endl;

    return 0;
}