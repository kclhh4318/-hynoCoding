#include <iostream>
#include <set>
using namespace std;

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int N;
    string mem1, mem2;
    set<string> member;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> mem1 >> mem2;
        if(mem1 == "ChongChong"){
            member.insert(mem1);
            member.insert(mem2);
        }
        else if(mem2 == "ChongChong"){
            member.insert(mem1);
            member.insert(mem2);
        }
        else if(member.find(mem1) != member.end()){
            member.insert(mem2);
        }
        else if(member.find(mem2)  != member.end()){
            member.insert(mem1);
        }
    }

    cout << member.size() << '\n';
    
    return 0;
}