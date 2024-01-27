#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while(true){
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if(v[0] == 0 && v[1] == 0 && v[2] == 0) break;
        else if(v[0] + v[1] <= v[2]) cout << "Invalid\n";
        else if(v[0] == v[1] && v[1] == v[2]) cout << "Equilateral\n";
        else if(v[0] == v[1] || v[1] == v[2] || v[0] == v[2]) cout << "Isosceles\n";
        else cout << "Scalene\n";
    }

    return 0;
}