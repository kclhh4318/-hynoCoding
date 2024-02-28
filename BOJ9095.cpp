#include <iostream>
using namespace std;

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int T, N, cache[11] = {0,};
    cache[1] = 1, cache[2] = 2, cache[3] = 4;

    for(int i = 4; i < 11; i++) cache[i] = cache[i - 1] + cache[i - 2] + cache[i - 3];

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;
        cout << cache[N] << '\n';
    }

    return 0;
}