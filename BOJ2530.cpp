//인공지능 시계

#include <iostream>
using namespace std;

int main() {

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int totalSec = A * 3600 + B * 60 + C;
    totalSec = (totalSec + D) % (24 * 3600);

    A = totalSec / 3600;
    B = (totalSec % 3600) / 60;
    C = totalSec % 60;

    cout << A << " " << B << " " << C << '\n';

    return 0;
}