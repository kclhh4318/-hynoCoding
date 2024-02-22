#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int goldBach(int N, vector<bool> p){
    int ret = 0;
    p[0] = p[1] = false;
    for(int i = 2; i <= sqrt(N); i++){
        if(p[i]){
            for(int j = i * i; j <= N; j += i){
                p[j] = false;
            }
        }
    }

    for(int i = 2; i <= N / 2; i++){
        if(p[i] && p[N - i]) ret++;
    }
    return ret;
}

int main(){
    def();

    int T, N;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;
        vector<bool> primeNumber(N + 1, true);
        cout << goldBach(N, primeNumber) << '\n';
    }

    return 0;
}