#include <iostream>
#include <vector>

using namespace std;

pair<int, int> count_paper(int x, int y, int n, vector<vector<int>>& paper) {
    // 종이의 모든 색이 같은지 확인
    int color = paper[x][y];
    for (int i = x; i < x + n; ++i) {
        for (int j = y; j < y + n; ++j) {
            if (paper[i][j] != color) {
                // 색이 다르면 4등분하여 재귀 호출
                int half = n / 2;
                auto result1 = count_paper(x, y, half, paper);
                auto result2 = count_paper(x + half, y, half, paper);
                auto result3 = count_paper(x, y + half, half, paper);
                auto result4 = count_paper(x + half, y + half, half, paper);

                return {result1.first + result2.first + result3.first + result4.first,
                        result1.second + result2.second + result3.second + result4.second};
            }
        }
    }

    // 모든 색이 같으면 해당 색종이 개수를 반환
    return (color == 1) ? make_pair(0, 1) : make_pair(1, 0);
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> paper(N, vector<int>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> paper[i][j];
        }
    }

    pair<int, int> result = count_paper(0, 0, N, paper);

    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}