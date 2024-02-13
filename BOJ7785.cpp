#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;

    cin >> N;
    unordered_set<string> giggle;

    for(int i = 0; i < N; i++){
        string name, state;
        cin >> name >> state;
        if(state == "enter"){
            giggle.insert(name);
        }
        else{
            giggle.erase(name);
        }
    }

    vector<string> gigglle(giggle.begin(), giggle.end());

    sort(gigglle.rbegin(), gigglle.rend());

    for(const auto& i : gigglle) cout << i << '\n';

    cout << endl;

    return 0;
}