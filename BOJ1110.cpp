#include <iostream>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){
    
    def();

    int N, cnt = 0;
    cin >> N;
    int originalN = N;

    do{
        int digit = (N / 10 + N % 10) % 10;
        N = N % 10 * 10 + digit;
        cnt++;
    } while(N != originalN);

    cout << cnt << endl;

    return 0;
}