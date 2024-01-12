#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

    vector<string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string str;
    cin >> str;

    for(int i = 0; i < croatian.size(); i++){
        while(1){
            int idx;
            idx = str.find(croatian[i]);
            if(idx == string::npos) break;
            str.replace(idx, croatian[i].length(), "$");
        }
    }

    cout << str.length() << endl;

    return 0;
}