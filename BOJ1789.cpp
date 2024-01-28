#include <iostream>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    long long S, N = 1;

    cin >> S;

    while(N * (N + 1) <= 2 * S){
        N++;
    }

    cout << N - 1 << '\n';

    return 0;
}