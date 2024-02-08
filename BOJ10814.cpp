#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool bigyo(pair<int, string>a, pair<int, string> b){
    return a.first < b.first;
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<pair<int, string>> v;

    for(int i = 0; i < N; i++){
        pair<int, string> temp;
        cin >> temp.first >> temp.second;
        v.push_back(temp);
    }

    stable_sort(v.begin(), v.end(), bigyo);

    for(int i = 0; i < v.size(); i++) cout << v[i].first << " " << v[i].second << '\n';

    return 0;
}