//삽입 정렬 한 번 더 구현하여보자.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertSort(vector<int>& A){
    for(int i = 0; i < A.size(); ++i){
        int j = i;
        while(j > 0 && A[j - 1] >= A[j]){
            swap(A[j - 1], A[j]);
            --j;
        }
    }
}

void printVec(const vector<int>& A){
    for(int i = 0; i < A.size(); ++i) cout << A[i] << endl;
}

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> v;

    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    insertSort(v); printVec(v);

    return 0;
}