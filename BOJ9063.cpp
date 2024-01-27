#include <iostream>
#include <algorithm>
using namespace std;

int main(void){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, xPos, yPos;

    cin >> N;

    if(N == 1){
        cin >> xPos >> yPos;
        cout << 0 << '\n';
    }
    else{
        int x[N], y[N];
        for(int i = 0; i < N; i++){
            cin >> x[i] >> y[i];
        }
        sort(x, x + N);
        sort(y, y + N);

        if(x[0] == x[N - 1] || y[0] == y[N - 1]) cout << 0 << '\n';
        else{
            cout << (x[N - 1] - x[0]) * (y[N - 1] - y[0]) << '\n';
        }
    }

    return 0;
}