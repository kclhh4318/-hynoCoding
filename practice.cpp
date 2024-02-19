#include <iostream>
#include <algorithm>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    int arr[3];

    for(int i = 0; i < 3; i++) cin >> arr[i];

    for(int i = 1; i < 3; i++){
        if(arr[i - 1] > arr[i]) swap(arr[i - 1], arr[i]);
    }

    if(arr[0] > arr[1]) swap(arr[0], arr[1]);

    for(int i = 0; i < 3; i++) cout << arr[i] << " ";

    return 0;
}