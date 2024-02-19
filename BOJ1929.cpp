#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    def();

    int N, M;
    vector<int> primeNumber;

    cin >> N >> M;

    for(int i = 2; i < M; i++){
        if(M % i != 0 && i >= N) {
            primeNumber.push_back(i);
        }
    }

    for(const auto& i : primeNumber) cout << i << '\n';

    return 0;
}