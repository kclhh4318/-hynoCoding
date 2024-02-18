#include <iostream>
#include <cmath>
using namespace std;

typedef long long int ll;

void def() {
    cin.tie(0); 
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}

// Function to find the next prime number greater than or equal to n
ll findNextPrime(ll n) {
    while (true) {
        bool isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (ll i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            return n;
        }
        n++;
    }
}

int main() {
    def();

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        cout << findNextPrime(n) << '\n';
    }

    return 0;
}
