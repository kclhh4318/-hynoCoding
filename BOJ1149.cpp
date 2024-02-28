#include <iostream>
#include <algorithm>
using namespace std;
constexpr int MAX_N = 1001;
typedef long long int ll;

ll cache[MAX_N][4];

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int N, RGB[4];
    cache[0][1] = 0;
    cache[0][2] = 0;
    cache[0][3] = 0;
    cin >> N;

    for(int i = 1; i <= N; i++){
        cin >> RGB[1] >> RGB[2] >> RGB[3]; 
        cache[i][1] = min(cache[i - 1][2], cache[i - 1][3]) + RGB[1];
        cache[i][2] = min(cache[i - 1][1], cache[i - 1][3]) + RGB[2];
        cache[i][3] = min(cache[i - 1][1], cache[i - 1][2]) + RGB[3];
    }

    cout << min(min(cache[N][1], cache[N][2]), cache[N][3]);

    return 0;
}