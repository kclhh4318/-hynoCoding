#include <iostream>
using namespace std;
constexpr int MAX_N = 1001;

int N, K;
long long cache[MAX_N][MAX_N];

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

long long bi(int n, int k){
    if(n == k || k == 0) return cache[n][k] = 1 % 10007;
    else if(cache[n][k] > 0) return cache[n][k];
    else return cache[n][k] = (bi(n - 1, k) + bi(n - 1, k - 1)) % 10007;
}

int main(){

    init();

    cin >> N >> K;

    cout << bi(N, K) << endl;

    return 0;
}