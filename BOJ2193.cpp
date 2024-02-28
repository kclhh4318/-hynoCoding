#include <iostream>
using namespace std;

int N;
long long cache[2][2];

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    cin >> N;

    cache[1][0] = 0;
    cache[1][1] = 1;

    for(int i = 2; i <= N; i++){
        cache[i % 2][0] = cache[(i - 1) % 2][0] + cache[(i - 1) % 2][1];
        cache[i % 2][1] = cache[(i - 1) % 2][0];
    }

    long long ret = cache[N % 2][0] + cache[N % 2][1];

    cout << ret << '\n';

    return 0;
}