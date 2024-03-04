#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int K, N;
    long long temp;
    vector<long long> v;

    cin >> K >> N;

    for(int i = 0; i < K; i++){
        cin >> temp;
        v.push_back(temp);
    }

    return 0;
}