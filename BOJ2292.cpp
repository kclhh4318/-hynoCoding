//벌집

#include <iostream>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    int cnt = 1;

    while(N > 1){
        N -= 6 * cnt;
        cnt++;
    }

    cout << cnt << '\n';

    return 0;
}