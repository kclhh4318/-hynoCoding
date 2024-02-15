#include <iostream>
using namespace std;

void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main() {

    def();
    
    int N;
    cin >> N;

    int originalN = N;
    int count = 0;

    do {
        int digitSum = (N / 10 + N % 10) % 10;
        N = N % 10 * 10 + digitSum;
        count++;
    } while (N != originalN);

    cout << count << endl;

    return 0;
}