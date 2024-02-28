#include <iostream>
using namespace std;

int cache[41] = {0, 1, 1};

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    for(int i = 3; i < 41; i++){
        cache[i] = cache[i - 1] + cache[i - 2];
    }

    int T, N;

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;
        if(N == 0) cout << 1 << " " << 0 << '\n';
        else if(N == 1) cout << 0 << " " << 1 << '\n';
        else cout << cache[N - 1] << " " << cache[N] << '\n';
    }

    return 0;
}