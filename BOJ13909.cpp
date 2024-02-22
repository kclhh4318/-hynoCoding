#include <iostream>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    def();

    int N, count = 0;
    cin >> N;

    for(int i = 1; i * i <= N; i++){
        count++;
    }

    cout << count << '\n';

    return 0;
}