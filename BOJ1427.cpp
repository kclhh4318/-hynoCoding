#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertSort(vector<int>& A){

    for(int i = 0; i < A.size(); i++){

        int j = i;

        while(j > 0 && A[j - 1] < A[j]){

            swap(A[j - 1], A[j]);
            j--;

        }
    }
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> v;

    while(N > 0){
        v.push_back(N % 10);
        N /= 10;
    }

    insertSort(v);

    for(int i = 0; i < v.size(); i++) cout << v[i];

    cout << endl;

    return 0;
}