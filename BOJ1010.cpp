#include <iostream>
using namespace std;

#define MAX_NUM 31

int cache[MAX_NUM][MAX_NUM];

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int bino(int n, int r){
    if(!cache[n][r]){
        if(n == r || r == 0) cache[n][r] = 1;
        else cache[n][r] = bino(n - 1, r - 1) + bino(n - 1, r);
    }
    return cache[n][r];
}

int main(){

    init();

    int T, N, M;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> N >> M;
        cout << bino(M, N) << '\n';
    }

    return 0;
}