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

    int N, temp, result;
    cin >> N;

    vector<int> num(N);

    for(int i = 0; i < N; i++){
        cin >> num[i];
    }

    if(N == 1){
        cout << num[0] * num[0] << '\n';
    }
    else{
        result = *max_element(num.begin(), num.end()) * *min_element(num.begin(), num.end());
        cout << result << '\n';
    }
    return 0;
}