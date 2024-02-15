#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    string S, temp;
    unordered_set<string> Sub;

    cin >> S;

    for(int i = 0; i < S.length(); i++){
        temp = "";
        for(int j = i; j < S.length(); j++){
            temp += S[j];
            Sub.insert(temp);
        }
    }

    cout << Sub.size() << endl;

    return 0;
}