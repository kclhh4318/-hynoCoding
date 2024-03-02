#include <iostream>
#include <stack>
using namespace std;

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int N, i = 1;
    string ans;
    stack<int> s;
    cin >> N;

    while(N--){
        int num;
        cin >> num;

        if(i <= num){
            while(i <= num){
                s.push(i);
                ans += '+';
                i++;
            }
            s.pop();
            ans += '-';
        }
        else{
            if(s.top() < num){
                cout << "NO\n";
                return 0;
            }
            else{
                s.pop();
                ans += '-';
            }
        }
    }

    for(int i = 0; i < ans.length(); i++){
        cout << ans[i] << '\n';
    }

    return 0;
}