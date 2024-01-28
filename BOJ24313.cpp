#include <iostream>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    int n = a0 / (c - a1);

    if(c == a1){
        if(a0 <= 0){
            cout << 1 << '\n';
            return 0;
            }
        else {
            cout << 0 << '\n';
            return 0;
            }
    }

    if(n < 0){
        if(c >= a1){
            cout << 1 << '\n';
            return 0;
        }
        else{
            cout << 0 << '\n';
            return 0;
        }
    }
    else{
        if(n > n0){
            cout << 0 << '\n';
            return 0;
        }
        else{
            if(c >= a1){
                cout << 1 << '\n';
                return 0;
            }
            else{
                cout << 0 << '\n';
                return 0;
            }
        }
    }

    return 0;
}