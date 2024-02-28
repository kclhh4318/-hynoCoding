#include <iostream>
using namespace std;
typedef long long int ll;

ll cache[101] = {0, 1, 1, 1, 2, 2};

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

ll P(int n){
    if((1 <= n && n <= 5) || cache[n] > 0) return cache[n];
    else return cache[n] = P(n - 1) + P(n - 5);
}

int main(){

    init();

    int T, N;

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;
        cout << P(N) << '\n';
    }

    return 0;
}