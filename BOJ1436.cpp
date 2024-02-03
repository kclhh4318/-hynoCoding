#include <iostream>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    int num = 666;

    while(N > 0){
        if(to_string(num).find("666") != string::npos) N--;
        num++;
    }
    
    cout << num - 1 << '\n';

    return 0;
}