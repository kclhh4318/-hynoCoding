#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int N, n1, n2, n3, sum, ans = numeric_limits<int>::min();

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> n1 >> n2 >> n3;
        if(n1 == n2 && n2 == n3){
            sum = 10000 + (n1 * 1000);
            ans = max(sum, ans);
        } else if(n1 == n2){
            sum = 1000 + (n1 * 100);
            ans = max(sum, ans);
        } else if(n2 == n3){
            sum = 1000 + (n2 * 100);
            ans = max(sum, ans);
        } else if(n1 == n3){
            sum = 1000 + (n1 * 100);
            ans = max(sum, ans);
        } else{
            sum = max(n1, max(n2, n3)) * 100;
            ans = max(sum, ans);
        }
    }

    cout << ans << '\n';

    return 0;
}