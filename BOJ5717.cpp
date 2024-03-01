#include <iostream>
using namespace std;

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int M, F;

    while(1){
        cin >> M >> F;
        if(M == 0 && F == 0) break;
        else cout << M + F << '\n';
    }

    return 0;
}