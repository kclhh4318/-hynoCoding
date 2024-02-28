#include <iostream>
using namespace std;

int callrec = 0, calldp = 0;
int dp[41] = {0,};

int recursive(int n){
    if(n == 1 || n == 2) {callrec++; return 1;}
    else return recursive(n - 1) + recursive(n - 2);
}

int dynamic(int n){

    dp[1] = dp[2] = 1; 
    for(int i = 3; i <= n; i++) {dp[i] = dp[i - 1] + dp[i - 2]; calldp++;}
    return dp[n];
}

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int N, trash;
    cin >> N;

    trash = recursive(N);
    trash = dynamic(N);

    cout << callrec << " " << calldp << '\n';
    return 0;
}