#include <iostream>
#include <limits>
#include <vector>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N, M, max = numeric_limits<int>::min();
    vector<int> v;

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            for(int k = j + 1; k < v.size(); k++){
                int sum = v[i] + v[j] + v[k];
                if(sum <= M && sum > max) max = sum;
            }
        }
    }

    cout << max << endl;

    return 0;
}