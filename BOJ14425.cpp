#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, M, cnt = 0;
    cin >> N >> M;
    vector<string> S(N);
    for(int i = 0; i < N; i++) cin >> S[i];

    sort(S.begin(), S.end());

    for(int i = 0; i < M; i++){
        string check;
        cin >> check;
        if(binary_search(S.begin(), S.end(), check)) cnt++;
    }

    cout << cnt << endl;

    return 0;
}