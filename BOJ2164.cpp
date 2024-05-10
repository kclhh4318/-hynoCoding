#include <iostream>
#include <queue>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    queue<int> q;

    cin >> N;

    for(int i = 1; i <= N; i++){
        q.push(i);
    }

    while(!(q.size() == 1)){
        q.pop();
        int temp = q.front();
        q.pop();
        q.push(temp);
    }

    cout << q.front() << '\n';

    return 0;
}