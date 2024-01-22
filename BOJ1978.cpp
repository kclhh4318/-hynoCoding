#include <iostream>
#include <cmath>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, num, cnt = 0;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> num;
        if(num < 2) continue;
        bool isPrime = true;
        for(int j = 2; j <= sqrt(num); j++){
            if(num % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}