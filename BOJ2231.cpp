#include <iostream>
#include <vector>
using namespace std;

void composition(int N, vector<int>& v){

    for(int i = 1; i < N; i++){
        int comp = 0, temp = i;
        while(temp > 0){
            comp += temp % 10;
            temp /= 10;
        }
        comp += i;
        if(comp == N){
            v.push_back(i);
        }
        else continue;
    }
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    vector<int> comp;

    int N;
    cin >> N;

    composition(N, comp);

    if(comp.size() == 0){
        cout << 0 << '\n';
    }
    else{
        cout << comp[0] << '\n';
    }

    return 0;
}