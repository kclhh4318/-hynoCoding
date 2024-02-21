#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

bool isPrime(int n){
        if(n == 1) return false;
        if(n % 2 == 0) return n == 2 ? true : false;
        else for(int i = 3; i <= sqrt(n); i++){
            if(n % i == 0) return false;
        }
    return true;
}

int main(){

    def();

    int N, M;
    cin >> N >> M;
    vector<int> v;

    for(int i = N; i <= M; i++){
        if(isPrime(i)) v.push_back(i);
    }

    for(const auto& i : v){
        cout << i << '\n';
    }

    return 0;
}