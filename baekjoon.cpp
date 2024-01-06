#include <iostream>
using namespace std;

int main(){

    string str;
    cin >> str;

    int cnt = 0, result;

    if(str.length() == 1) result = 1;
    else{
        for(int i = 0; i < str.length() / 2; i++){
            if(str[i] != str[str.length() - i - 1]) cnt++;
        }
    }
    if(cnt == 0) result = 1;
    else result = 0;
    

    cout << result << endl;

    return 0;
}