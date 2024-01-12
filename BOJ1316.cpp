//그룹 단어 체커

#include <iostream>
using namespace std;

int main(){

    int N, cnt = 0;
    string s;

    cin >> N;
    
    for(int i = 0; i < N; i++){

        cin >> s;
        bool alphabet_switch[26] = { false, };

        alphabet_switch[s[0] - 97] = true;

        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i - 1]) continue;
            else if(s[i] != s[i - 1] && alphabet_switch[s[i] - 97] == true){
                cnt++;
                break;
            }
            else alphabet_switch[s[i] - 97] = true;
        }

    }

    cout << N - cnt << endl;

    return 0;
}