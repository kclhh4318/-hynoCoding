#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int ans = numeric_limits<int>::min();

void blackJack(const vector<int>& cards, int M, int sum, int idx, int cnt){
    if(cnt == 3){
        if(sum <= M && sum > ans){
            ans = sum;
        }
        return;
    }
    if(idx >= cards.size()) return;

    blackJack(cards, M, sum + cards[idx], idx + 1, cnt + 1);

    blackJack(cards, M, sum, idx + 1, cnt);
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    vector<int> cards(N);
    for(int i = 0; i < N; i++){
        cin >> cards[i];
    }
    blackJack(cards, M, 0, 0, 0);

    cout << ans << '\n';
}