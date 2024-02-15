#include <iostream>
#include <algorithm>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}

int main(){
    
    def();

    int T, A, B;

    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> A >> B;

        cout << lcm(A, B) << '\n';

    }

    return 0;
}