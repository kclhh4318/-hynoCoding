#include <iostream>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int a, b, c;

    cin >> a >> b >> c;

    if(a + b + c != 180) cout << "Error" << endl;
    else if(a == c && b == c && a == b && a == 60) cout << "Equilateral" << endl;
    else if(a == c || b == c || a == b) cout << "Isosceles" << endl;
    else cout << "Scalene" << endl;

    return 0;
}