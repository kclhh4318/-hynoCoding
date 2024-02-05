#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertSort(vector<int>& A){
    for(int i = 0; i < A.size(); ++i){
        int j = i;
        while(j > 0 && A[j - 1] > A[j]){
            swap(A[j - 1], A[j]);
            --j;
        }
    }
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N, k;
    vector<int> v;

    cin >> N >> k;

    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    insertSort(v);

    cout << v[N - k] << endl;

    return 0;
}