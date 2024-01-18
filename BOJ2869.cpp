//달팽이는 올라가고 싶다

#include <iostream>
#include <cmath>
using namespace std;

int main(){


    int V, A, B;
    cin >> A >> B >> V;

    int day = ceil((double)(V - B) / (A - B));

    cout << day << '\n';

    return 0;
}