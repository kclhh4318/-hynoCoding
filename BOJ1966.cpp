#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(){

    cin.tie(0); //입출력 해제
    ios_base::sync_with_stdio(false);

    int T, N, M;

    cin >> T;

    while(T--){
        vector<int> v;
        queue<pair<int, int>> q; //pair를 통해 찾는 값을 
        int cnt = 0;

        cin >> N >> M;

        for(int i = 0; i < N; i++){
            int x;
            cin >> x;
            v.push_back(x);

            if(i == M){
                q.push({x, 1});
            } else{
                q.push({x, 0});
            }
        }

        sort(v.begin(), v.end());

        for(;;){
            if(v.back() == q.front().first){
                if(q.front().second == 1){
                    cnt++;
                    break;
                } else{
                    v.pop_back();
                    q.pop();
                    cnt++;
                }
            }else{
                q.push({q.front().first, q.front().second});
                q.pop();
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}