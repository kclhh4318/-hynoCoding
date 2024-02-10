#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

void func(vector<int>& A, vector<int> SA);

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> v(N);
    vector<int> sortV;

    for(int i = 0; i < N; i++){
        cin >> v[i];
        sortV.push_back(v[i]);
    }

    func(v, sortV);

    cout << endl;

    return 0;
}

void func(vector<int>& A, vector<int> SA){
    sort(SA.begin(), SA.end());
    SA.erase(unique(SA.begin(), SA.end()), SA.end());
    unordered_map<int, int> m;
    int Comp = 0;
    for(int i : SA){
        m[i] = Comp++;
    }
    for(int i = 0; i < A.size(); i++){
        cout << m[A[i]] << " ";
    }
}