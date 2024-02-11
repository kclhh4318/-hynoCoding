#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int biSearch(vector<int>& arr, int target, int start, int end){
    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

vector<int> num;
vector<int> Check;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, M, temp;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> temp;
        num.push_back(temp);
    }

    cin >> M;

    for(int i = 0; i < M; i++){
        cin >> temp;
        Check.push_back(temp);
    }

    sort(num.begin(), num.end());

    for(int i = 0; i < M; i++){
        int result = biSearch(num, Check[i], 0, N - 1);
        if(result != -1) cout << "1 ";
        else cout << "0 ";
    }

    cout << endl;

    return 0;
}