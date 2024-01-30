#include <iostream>
using namespace std;

void Ans(){
    int A, I;
    cin >> A >> I;
    cout << A * (I - 1) + 1 << endl;
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    Ans();

    return 0;
}