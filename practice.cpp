#include <iostream>
using namespace std;
typedef unsigned long long ull;

int main(){
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    ull n;
    cin >> n;

    cout << n * (n - 1) / 2 << '\n' << 2 << endl;

    return 0;
}