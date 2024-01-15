//최댓값

#include <iostream>
using namespace std;
int const SIZE = 9;
int arr[SIZE][SIZE];

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++) cin >> arr[i][j];
    }

    int max = arr[0][0], row = 1, column = 1; // 행렬 초기화 하는 거 주의

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
                row = i + 1;
                column = j + 1;
            }
        }
    }

    cout << max << '\n';
    cout << row << " " << column << '\n';

    return 0;
}