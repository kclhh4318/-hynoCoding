#include <iostream>
using namespace std;

int main(){

    int num;

    
    while(true){
        cin >> num;
        bool check = true;
        if(num == 0) break;
        else{
            string s = to_string(num);
            for(int i = 0; i < s.length() / 2; i++){
                if(s[i] != s[s.length() - i - 1]){
                    check = false;
                    break;
                }
            }
            if(check) cout << "yes" << '\n';
            else cout << "no" << '\n';
        }
    }

    return 0;
}