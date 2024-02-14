#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    def();

    int N, M;
    string seenPerson, listenPerson;
    unordered_set<string> seen;
    vector<string> job;

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        cin >> seenPerson;
        seen.insert(seenPerson);
    }

    for(int i = 0; i < M; i++){
        cin >> listenPerson;
        if(seen.find(listenPerson) != seen.end()){
            job.push_back(listenPerson);
        }
    }

    sort(job.begin(), job.end());

    cout << job.size() << '\n';
    for(auto& entry : job) cout << entry << '\n';

    return 0;
}