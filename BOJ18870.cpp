#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void compression(vector<int>& A, vector<int>& count) {
    unordered_set<int> seen;

    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A.size(); j++) {
            if (A[i] > A[j] && seen.find(A[j]) == seen.end()) {
                count[i]++;
                seen.insert(A[j]);
            }
        }
        seen.clear();
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> v(N);
    vector<int> count(N, 0);

    for (int i = 0; i < v.size(); i++) cin >> v[i];

    compression(v, count);

    for (int i = 0; i < count.size(); i++) cout << count[i] << " ";

    cout << endl;

    return 0;
}
