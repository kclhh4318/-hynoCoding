#include <iostream>
#include <cmath>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int a, b, c;

    while(1){
        cin >> a >> b >> c;

        if((a == 0 && b == 0) && c == 0) break;

        else {

            if(a > b) swap(a, b);
    
            if(b > c) swap(b, c);

            if(pow(a, 2) + pow(b, 2) == pow(c, 2)) cout << "right" << '\n';
            else cout << "wrong" << '\n';
        }
    
    }

    return 0;
}