#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(){

    int N, K;
    cin >> N >> K;

    queue<int> q;
    queue<int> res;

    for(int i = 0; i < N; i++){
        q.push(i + 1);
    }

    while(!q.empty()){
        for(int i = 0; i < K - 1; i++){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        int ret = q.front();
        q.pop();
        res.push(ret);
    }

    cout << "<";
    while(!res.empty()){
        if(res.size() != 1){
            cout << res.front() << ", ";
            res.pop();
        }
        else{
            cout << res.front();
            res.pop();
        }
    }
    cout << ">" << endl;
    return 0;
}