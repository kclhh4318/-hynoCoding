#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    def();

    string S, temp;
    vector<string> subStr;
    cin >> S;

    for(int i = 0; i < S.length(); i++){
        for(int j = 1; j <= S.length() - i; j++){
            temp = S.substr(i, j);
            if(find(subStr.begin(), subStr.end(), temp) == subStr.end()) subStr.push_back(temp);
        }
    }

    cout << subStr.size() << endl;

    return 0;
}