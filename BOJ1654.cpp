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
    cin >> K >> N;

    vector<int> v(K);
    int max_len = 0;
    for(int i = 0; i < K; i++){
        cin >> v[i];
        max_len = max(max_len, v[i]);
    }

    long long left = 1;
    long long right = max_len;
    long long mid = (left + right) / 2;

    while(left <= right){
        int cnt = 0;
        for(int i = 0; i < K; i++){
            cnt += v[i] / mid;
        }
        if(cnt >= N){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
        mid = (left + right) / 2;
    }

    cout << mid << '\n';

    return 0;
}