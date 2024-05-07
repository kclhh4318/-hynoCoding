#include <iostream>
#include <queue>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int T;
    string str;
    bool check;
    queue<char> q;

    cin >> T;

    while(T--){
        cin >> str;

        int balance = 0;
        bool isBalanced = true;

        for(char ch : str){
            if(ch == '('){
                balance++;
            } else if(ch == ')'){
                balance--;
            }
            if(balance < 0){
                isBalanced = false;
                break;
            }
        }
        if (balance == 0 && isBalanced) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    

    return 0;
}