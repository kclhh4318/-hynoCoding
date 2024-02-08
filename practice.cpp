#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);

    sort(v.begin(), v.end());

    unique(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";

    cout << endl;
    
    return 0;
}