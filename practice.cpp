#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int N, ans = 0;
    string input;
    unordered_set<string> greetings;
    vector<string> records;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> input;
        records.push_back(input);

        if(input == "ENTER"){
            // 새로운 사람이 입장하면 인사 곰곰티콘으로 간주
            greetings.insert(records.back());
        }
        else{
            // 곰곰티콘이 사용된 닉네임이면 제거
            greetings.erase(input);
        }
    }

    // 최종적으로 남아있는 곰곰티콘 수 출력
    cout << greetings.size() << '\n';

    return 0;
}
