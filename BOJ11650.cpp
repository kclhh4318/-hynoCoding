#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Pair{
    public:
    int x;
    int y;
};

bool daeso(Pair a, Pair b){
    if(a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<Pair> v;

    for(int i = 0; i < N; i++){
        Pair temp;
        cin >> temp.x >> temp.y;
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), daeso);

    for(int i = 0; i < N; i++) cout << v[i].x << " " << v[i].y << '\n';

    return 0;
}