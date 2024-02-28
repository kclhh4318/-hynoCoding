#include <iostream>
using namespace std;

int N, K ,cache[11][11];

int bi(int n, int k){
    if(n == k || k == 0) return cache[n][k] = 1;
    else if(cache[n][k] > 0) return cache[n][k];
    else return cache[n][k] = bi(n - 1, k) + bi(n - 1, k - 1);
}

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();
    
    cin >> N >> K;

    cout << bi(N, K) << '\n';

    return 0;
}