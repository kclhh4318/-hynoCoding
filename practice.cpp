#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> coordinates(N);
    vector<int> sortedCoordinates;

    // 입력 받기 및 정렬
    for (int i = 0; i < N; ++i) {
        cin >> coordinates[i];
        sortedCoordinates.push_back(coordinates[i]);
    }

    // 중복 제거 및 정렬
    sort(sortedCoordinates.begin(), sortedCoordinates.end());
    sortedCoordinates.erase(unique(sortedCoordinates.begin(), sortedCoordinates.end()), sortedCoordinates.end());

    // 좌표 압축을 위한 맵 생성
    unordered_map<int, int> compressionMap;
    int compressedValue = 0;

    for (int coord : sortedCoordinates) {
        compressionMap[coord] = compressedValue++;
    }

    // 결과 출력
    for (int i = 0; i < N; ++i) {
        cout << compressionMap[coordinates[i]] << " ";
    }

    cout << endl;

    return 0;
}
