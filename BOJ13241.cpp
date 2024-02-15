#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

ll gcd(ll a, ll b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return (a * b) / gcd(a, b);
}

int main(){

    def();

    ll A, B;
    cin >> A >> B;

    cout << lcm(A, B) << endl;

    return 0;
}