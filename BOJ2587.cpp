#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertSort(vector<int>& A){
    for(int i = 0; i < A.size(); ++i){
        int j = i;
        while(j > 0 && A[j - 1]  > A[j]){
            swap(A[j - 1], A[j]);
            --j;
        }
    }
}

int goAvg(vector<int>& A){
    int ret = 0;
    for(int i = 0; i < A.size(); i++){
        ret += A[i];
    }
    return ret / A.size();
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    vector<int> v(5);

    for(int i = 0; i < 5; i++) cin >> v[i];

    int avg = goAvg(v);

    insertSort(v);

    cout << avg << endl;
    cout << v[2] << endl;

    return 0;
}