#include <iostream>
#include <set>
using namespace std;

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int N, ans = 0;
    string input;
    set<string> chat;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> input;
        if(input == "ENTER"){
            ans += chat.size();
            chat.clear();
        }
        else{
            chat.insert(input);
        }
    }

    ans += chat.size();

    cout << ans << '\n';

    return 0;
}