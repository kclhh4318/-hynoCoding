#include <iostream>
#include <cmath>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){
    def();

    int N;
    cin >> N;

    cout << pow(2, N) << endl;

    return 0;
}