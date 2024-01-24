#include <iostream>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    if(N == 1) return 0;

    for(int i = 2; i <= N; i++){
        while(N % i == 0){
            cout << i << '\n';
            N /= i;
        }
    }

    return 0;
}