#include <iostream>
#include <stack>
using namespace std;

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();
    
    int N, num;
    string temp;
    stack<int> s;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> temp;
        if(temp == "push"){
            cin >> num;
            s.push(num);
        } else if(temp == "pop"){
            if(s.empty()) cout << -1 << '\n';
            else{
                cout << s.top() << '\n';
                s.pop();
            }
        } else if(temp == "size"){
            cout << s.size() << '\n';
        } else if(temp == "empty"){
            cout << s.empty() << '\n';
        } else if(temp == "top"){
            if(s.empty()) cout << -1 << '\n';
            else cout << s.top() << '\n';
        }
    }

    return 0;
}