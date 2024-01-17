#include <iostream>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string N;
    int B;

    cin >> N >> B;

    int result = 0;
    int temp = 1;

    for(int i = N.length() - 1; i >= 0; i--){
        if(N[i] >= '0' && N[i] <= '9'){
            result += (N[i] - '0') * temp;
        }
        else{
            result += (N[i] - 'A' + 10) * temp;
        }
        temp *= B;
    }

    cout << result << '\n';

    return 0;
}