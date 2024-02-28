#include <iostream>
#include <cstring>
using namespace std;

int callCnt;
char word[1001];

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int recursion(const char* s, int l, int r){
    callCnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s){
    return recursion(s, 0, strlen(s) - 1);
}

int main(){

    init();

    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> word;
        cout << isPalindrome(word);
        cout << " " << callCnt << "\n";
        callCnt = 0;
    }

    return 0;
}