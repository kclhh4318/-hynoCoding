#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int checkBoard(const vector<string>& board, int x, int y) {
    char colors[2] = {'B', 'W'};
    int ans = numeric_limits<int>::max();

    for(int c = 0; c < 2; c++) {
        int change = 0;
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                if(board[x+i][y+j] != colors[(i + j + c) % 2]) change++;
            }
        }
        ans = min(ans, change);
    }
    return ans;
}

int main() {
    
    int N, M;
    cin >> N >> M;

    vector<string> board(N);
    for(int i = 0; i < N; i++) cin >> board[i];

    int result = numeric_limits<int>::max();
    for(int i = 0; i <= N - 8; i++) {
        for(int j = 0; j <= M - 8; j++) {
            result = min(result, checkBoard(board, i, j));
        }
    }

    cout << result << '\n';

    return 0;
}