#include <iostream>
#include <vector>
using namespace std;

void countingSort(vector<int>& arr, int range) {
    vector<int> count(range + 1, 0);

    for (int i = 0; i < arr.size(); i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i <= range; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    int maxElement = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        maxElement = max(maxElement, arr[i]);
    }

    countingSort(arr, maxElement);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
