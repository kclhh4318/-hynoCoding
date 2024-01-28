#include <iostream>
using namespace std;

void solve();

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    solve();

    return 0;
}

void solve(){
    int a, b;
    while(true){
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        else if(a > b) cout << "Yes\n";
        else cout << "No\n";
    }
}