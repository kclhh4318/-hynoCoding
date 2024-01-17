//세탁소 사장 동혁

#include <iostream>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T, C, Q, D, N, P;

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> C;
        Q = C / 25;
        C %= 25;
        D = C / 10;
        C %= 10;
        N = C / 5;
        C %= 5;
        P = C / 1;
        cout << Q << " " << D << " " << N << " " << P << "\n";
    }

    return 0;
}