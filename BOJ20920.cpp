#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool crit(const string& A, const string& B){
    if(A.length() < B.length()) return A < B;
}

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int N, M;
    string temp;
    vector<string> word;
    unordered_set<string> last_word;
    map<string, int> mode;

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        cin >> temp;
        if(temp.length() >= M){word.push_back(temp); last_word.insert(temp);}

    }

    for(int i = 0; i < word.size(); i++){
        mode[word[i]]++;
    }

    int max_mode = 0;
    string mode_val;
    for(auto it = mode.begin(); it != mode.end(); it++){
        if(it -> second > max_mode){
            word.clear();
            word.push_back(it->first);
        } else if(it -> second == max_mode){
            word.push_back(it -> first);
        }
    }

    return 0;
}