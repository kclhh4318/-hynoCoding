#include <iostream>
using namespace std;
int const ROW = 5;
int const COL = 16;
char arr[ROW][COL] = { 0, };

int main(){

    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            char c = getchar();
            if(c == '\n') break;
            arr[i][j] = c;
        }
    }

    for(int i = 0; i < COL; i++){
        for(int j = 0; j < ROW; j++){
            if(arr[j][i] != 0) cout << arr[j][i];
        }
    }
    cout << endl;
    return 0;
}