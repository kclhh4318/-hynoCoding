#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int Check(const vector<string>& v, int x, int y){
    char BW[2] = {'B', 'W'};
    int minChange = numeric_limits<int>::max();

    for(int T = 0; T < 2; T++){
        int cnt = 0;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(v[x + i][y + j] != BW[(i + j + T) % 2]) cnt++;
            }
        }
        minChange = min(minChange, cnt);
    }
    return minChange;
}

int main(){

    int N, M;
    cin >> N >> M;

    vector<string> board(N);
    for(int i = 0; i < N; i++) cin >> board[i];

    int ans = numeric_limits<int>::max();
    for(int i = 0; i <= N - 8; i++){
        for(int j = 0; j <= M - 8; j++){
            ans = min(ans, Check(board, i, j));
        }
    }

    cout << ans << endl;

    return 0;
}