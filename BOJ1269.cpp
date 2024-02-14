#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    def();

    int A, B, inputA, inputB, interSec = 0;
    set<int> setA;

    cin >> A >> B;

    for(int i = 0; i < A; i++){
        cin >> inputA;
        setA.insert(inputA);
    }

    for(int i = 0; i < B; i++){
        cin >> inputB;
        if(setA.find(inputB) != setA.end()) interSec++;
    }

    cout << (A - interSec) + (B - interSec) << '\n';

    return 0;
}