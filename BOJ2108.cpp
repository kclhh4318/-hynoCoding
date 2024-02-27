#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;

int avg (const vector<int>& A){
    double sum = 0.0;
    for(const auto& i : A){
        sum += i;
    }

    return round(sum / A.size());
}

int median(const vector<int>& A){
    int lo = 0, hi = A.size();
    int mid = (lo + hi) / 2;
    return A[mid];
}

int mode(const vector<int>& A){

    vector<int> cand;
    map<int, int> count;

    for(int i = 0; i < A.size(); i++){
        count[A[i]] = 0;
    }

    for(int i = 0; i < A.size(); i++){
        count[A[i]]++;
    }

    int max_cnt = 0;
    for(auto it = count.begin(); it != count.end(); it++){
        if(it -> second > max_cnt){
            max_cnt = it -> second;
            cand.clear();
            cand.push_back(it -> first);
        } else if(it -> second == max_cnt){
            cand.push_back(it -> first);
        }
    }

    if(cand.size() == 1) return cand[0];

    sort(cand.begin(), cand.end());
    return cand[1];

}


int range(const vector<int>& A){
    return *max_element(A.begin(), A.end()) - *min_element(A.begin(), A.end());
}

void init(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    init();

    int N;
    cin >> N;
    vector<int> num(N);

    for(int i = 0; i < N; i++){
        cin >> num[i];
    }

    sort(num.begin(), num.end());

    cout << avg(num) << '\n';
    cout << median(num) << '\n';
    cout << mode(num) << '\n';
    cout << range(num) << '\n';

    return 0;
}