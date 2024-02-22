#include <iostream>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int func(int N){
    return N * (N - 1);
}

int main(){

    int N;
    cin >> N;

    cout << func(N) << endl;

    return 0;
}