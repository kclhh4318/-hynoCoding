#include <iostream>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int factorial (int n){
    if(n <= 1) return 1;
    else return factorial(n - 1) * n;
}

int main(){

    def();

    int N;
    cin >> N;

    cout << factorial(N) << endl;

    return 0;
}