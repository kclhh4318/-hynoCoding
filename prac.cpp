#include <iostream>
using namespace std;

int main(){

    string str = "ba";
    int cnt = 0;

    if(str[0] != str[1]) cnt++;

    cout << cnt << endl;
    return 0;
}