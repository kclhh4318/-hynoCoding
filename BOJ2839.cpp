#include <iostream>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    int ans = 0;

    while(N >= 0){
        if(N % 5 == 0){
            ans += N / 5;
            cout << ans << '\n';
            return 0;
        }
        else{
            N -= 3;
            ans++;
        }
    }

    cout << -1 << '\n';

    return 0;
}