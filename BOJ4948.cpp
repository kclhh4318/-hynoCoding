#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int countPrimes(int upperBound) {
    vector<bool> isPrime(upperBound + 1, true);
    isPrime[0] = isPrime[1] = false;

    int count = 0;
    for (int i = 2; i <= sqrt(upperBound); ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= upperBound; j += i) { //에라토스테네스의 체
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= upperBound; ++i) {
        if (isPrime[i]) {
            ++count;
        }
    }

    return count;
}

int main(){
    def();

    int n;

    while(cin >> n){
        if(n == 0) break;
        else{
            cout << countPrimes(2 * n) - countPrimes(n) << '\n';
        }
    }

    return 0;
}
