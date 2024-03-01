#include <iostream>
#include <queue>
using namespace std;

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int N, num;
    string temp;
    queue<int> q;

    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> temp;
        if(temp == "push"){
            cin >> num;
            q.push(num);
        } else if(temp == "pop"){
            if(q.empty()) cout << -1 << '\n';
            else{
                cout << q.front() << '\n';
                q.pop();
            }
        } else if(temp == "size"){
            cout << q.size() << '\n';
        } else if(temp == "empty"){
            if(q.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        } else if(temp == "front"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.front() << '\n';
        } else if(temp == "back"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.back() << '\n';
        }
    }
    
    return 0;
}