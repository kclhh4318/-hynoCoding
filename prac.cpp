#include <iostream>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = N - i; j > 0; j--) cout << ' ';
        for(int j = 2 * i - 1; j > 0; j--) cout << '*';
        cout << endl;
    }

    for(int i = 1; i < N; i++){
        for(int j = i; j > 0; j--) cout << ' ';
        for(int j = 2 * (N - i) - 1; j > 0; j--) cout << '*';
        cout << endl;
    }

    return 0;
}