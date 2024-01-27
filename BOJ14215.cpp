#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    if(v[0] + v[1] > v[2]) cout << v[0] + v[1] + v[2] << '\n';
    else cout << 2 * (v[0] + v[1]) - 1 << '\n';

    return 0;
}