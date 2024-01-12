//피보나치 수 2

#include <iostream>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    long long int arr[1001];
    long long int n;

    cin >> n;
    
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i <= n; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << arr[n] << endl;

    return 0;
}