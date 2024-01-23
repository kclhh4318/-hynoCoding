#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int M, N;
    cin >> M >> N;

    vector<int> p;
    
    for(int i = M; i <= N; i++){
        bool isPrime = true;
        if(i < 2) continue;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) p.push_back(i);
    }

    if(p.size() == 0) cout << -1 << '\n';
    else{
        int sum = 0;
        for(int i = 0; i < p.size(); i++) sum += p[i];
        cout << sum << '\n';
        cout << p[0] << '\n';
    }

    return 0;
}