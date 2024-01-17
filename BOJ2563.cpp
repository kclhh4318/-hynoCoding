//색종이

#include <iostream>
using namespace std;
int const drawingPaperSIZE = 100;
int arr[drawingPaperSIZE][drawingPaperSIZE] = {0,};
int const colorSIZE = 10;

int main(){

    int N, A = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;
        for(int j = x; j < x + colorSIZE; j++){
            for(int k = y; k < y + colorSIZE; k++){
                arr[j][k] = 1;
            }
        }
    }

    for(int i = 0; i < drawingPaperSIZE; i++){
        for(int j = 0; j < drawingPaperSIZE; j++){
            if(arr[i][j] == 1) A++;
         }
    }

    cout << A << '\n';

    return 0;
}