//진법 변환 2

#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, B;
    string result = "";

    cin >> N >> B;

    for(int i = N; i > 0; i /= B){
        if(i % B >= 10) result += (char)(i % B - 10 + 'A');
        else result += (char)(i % B + '0');
    }

    reverse(result.begin(), result.end());

    cout << result << '\n';

    return 0;
}