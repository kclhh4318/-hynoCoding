#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

string pukemon_name[100001];

void def(){
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

int main(){
    def();
    int N, M, num;
    string test;
    unordered_map <string, int> pukemon_dic;

    cin >> N >> M;
    
    for(int i = 0; i < N; i++){
        cin >> pukemon_name[i];
        pukemon_dic.insert(make_pair(pukemon_name[i], i));
    }

    for(int i = 0; i < M; i++){
        cin >> test;
        if(isdigit(test[0]) != 0){
            num = stoi(test) - 1;
            cout << pukemon_name[num] << '\n';
        }
        else{
            auto idx = pukemon_dic.find(test);
            cout << idx->second + 1 << '\n';
        }
    }
    cout << endl;
    return 0;
}