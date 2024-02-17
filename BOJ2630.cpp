#include <iostream>
#include <vector>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

pair<int, int> Check(int y, int x, int n, vector<vector<int>>& A){
    int initial = A[y][x];
    for(int dy = y; dy < y + n; dy++){
        for(int dx = x; dx < x + n; dx++){
            if(A[dy][dx] != initial){
                int half = n / 2;
                auto result1 = Check(y, x, half, A);
                auto result2 = Check(y + half, x, half, A);
                auto result3 = Check(y, x + half, half, A);
                auto result4 = Check(y + half, x + half, half, A);

                return {result1.first + result2.first + result3.first + result4.first, result1.second + result2.second + result3.second + result4.second};
            }
        }
    }
    return (initial == 1) ? make_pair(0, 1) : make_pair(1, 0);
}

int main(){

    def();

    int N;
    cin >> N;

    vector<vector<int>> paper(N, vector<int>(N));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
        cin >> paper[i][j];
    }

    pair<int, int> res = Check(0, 0, N, paper);

    cout << res.first << '\n' << res.second;

    return 0;
}