#include <iostream>
#include <algorithm>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int GCD(int a, int b){
    if(b == 0) return a;
    return GCD(b, a % b);
}

int LCM(int a, int b){
    return (a * b) / GCD(a, b);
}

void GiYak(int& numerator, int& denominator){
    int gcd = GCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}

int main(){

    def();

    int num1, num2, denom1, denom2, numAns, denomAns;

    cin >> num1 >> denom1 >> num2 >> denom2;

    denomAns = LCM(denom1, denom2);

    numAns = num1 * (denomAns / denom1) + num2 * (denomAns / denom2);

    GiYak(numAns, denomAns);

    cout << numAns << " " << denomAns << endl;

    return 0;
}