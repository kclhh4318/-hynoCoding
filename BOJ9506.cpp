#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;

    while(true){

        cin >> N;

        if(N == -1) break;
        else{

            vector<int> v;

            for(int i = 1; i <= N; i++){

                if(N % i == 0) v.push_back(i);
            }

            int sum = 0;
            for(int i = 0; i < v.size() - 1; i++) sum += v[i];
            if(sum != N) cout << N << " is NOT perfect.\n";
            else{

                cout << N << " =";
                for(int i = 0; i < v.size() - 2; i++) cout << ' ' << v[i] << " +";
                cout << ' ' << v[v.size() - 2] << '\n';
            }
                
        }
    }

    return 0;
}