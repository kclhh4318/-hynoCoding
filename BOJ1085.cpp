//직사각형에서 탈출

#include <iostream>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int x, y, w, h, x_min, y_min, min;
    cin >> x >> y >> w >> h;

    x_min = x;
    y_min = y;

    if(x > w - x) x_min = w - x;
    if(y > h - y) y_min = h - y;
    if(x_min > y_min) min = y_min;
    else min = x_min;

    cout << min << '\n';

    return 0;
}