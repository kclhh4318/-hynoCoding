#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int x[3] = { 0, }, y[3] = { 0, }, xAns, yAns;

    for(int i = 0; i < 3; i++) cin >> x[i] >> y[i];

    sort(x, x + 3), sort(y, y + 3);

    if(x[0] == x[1]) xAns = x[2];
    else xAns = x[0];
    
    if(y[0] == y[1]) yAns = y[2];
    else yAns = y[0];

    cout << xAns << " " << yAns << "\n";
    

    return 0;
}