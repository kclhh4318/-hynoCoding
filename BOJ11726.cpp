#include <iostream>
using namespace std;

long long cache[1001];

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int tile(int n){
    if(n == 1) return cache[1] = 1 % 10007;
    else if(n == 2) return cache[2] = 2 % 10007;
    else if(cache[n] > 0) return cache[n];
    return cache[n] = (tile(n - 1) + tile(n - 2)) % 10007;
}

int main(){

    init();

    int n;
    cin >> n;

    cout << tile(n) << endl;

    return 0;
}