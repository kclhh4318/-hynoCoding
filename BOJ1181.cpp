#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool bigyo(const string& a, const string& b){
    if(a.length() == b.length()){
        for(int i = 0; i < a.length(); i++){
            if(a[i] != b[i])
                return (int)a[i] < (int)b[i];
        }
        return false;
    }

    return a.length() < b.length();
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<string> v;

    for(int i = 0; i < N; i++){
        string temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), bigyo);
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i = 0; i < v.size(); i++) cout << v[i] << '\n';

    return 0;
}