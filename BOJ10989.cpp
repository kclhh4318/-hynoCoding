#include <iostream>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int N, A[10001] = {0,}, idx;
    cin >> N;

    for(int i = 0; i < N; i++){
       cin >>  idx;
       A[idx] += 1;
    }

    for(int i = 1; i <= 10000; i++){
        for(int j = 0; j < A[i]; j++){
            cout << i << '\n';
        }
    }

    return 0;
}