#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int T, N;

    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> N;

        vector<pair<string, int>> v(N);
        int ans = numeric_limits<int>::min(), idx;

        for(int i = 0; i < N; i++){

            cin >> v[i].first >> v[i].second;

            if(v[i].second > ans){
                ans = v[i].second;
                idx = i;
            }
        }

        cout << v[idx].first << '\n';
    }

    return 0;
}