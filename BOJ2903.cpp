//중앙 이동 알고리즘

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int N;
    cin >> N;

    int S = 2 + (pow(2, N) - 1);

    cout << (int)pow(S, 2) << '\n';

    return 0;
}