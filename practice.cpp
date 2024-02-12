#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    vector<string> m(5);
    vector<string> check(11);

    for(int i = 0; i < m.size(); i++) cin >> m[i];
    for(int i = 0; i < check.size(); i++) cin >> check[i];

    auto it = find(m.begin(), m.end(), "baekjoononlinejudge") - m.begin();

    cout << it << endl;

    return 0;
}