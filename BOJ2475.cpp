#include <iostream>
#include <cmath>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int input, sum = 0, ret;

    for(int i = 0; i < 5; i++){
        cin >> input;
        sum += pow(input, 2);
    }

    ret = sum % 10;

    cout << ret << '\n';

    return 0;
}