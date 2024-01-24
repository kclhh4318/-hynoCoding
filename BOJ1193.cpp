//분수 찾기

#include <iostream>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int X;

    cin >> X;

    int i = 1;
    while(X > i){
        X -= i;
        i++;
    }

    if(i % 2 == 0) cout << X << '/' << i - X + 1 << '\n';
    else cout << i - X + 1 << '/' << X << '\n';

    return 0;
}