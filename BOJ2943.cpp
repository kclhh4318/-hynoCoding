#include <iostream>
#include <stack>
#include <limits>
using namespace std;

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int N, INF = numeric_limits<int>::max(), height;
    stack<pair<int, int>> tower;
    tower.push({INF, 0});

    cin >> N;

    for(int i = 1; i <= N; i++){
        cin >> height;
        while(tower.top().first < height) tower.pop();
        cout << tower.top().second << " ";
        tower.push({height, i});
    }

    return 0;
}