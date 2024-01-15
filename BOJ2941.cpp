//크로아티아 알파벳

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'c' && (str[i+1] == '=' || str[i+1] == '-')) {
            i++;
        } else if (str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=') {
            i += 2;
        } else if ((str[i] == 'd' && str[i+1] == '-') || (str[i] == 'l' && str[i+1] == 'j') || (str[i] == 'n' && str[i+1] == 'j') || (str[i] == 's' && str[i+1] == '=') || (str[i] == 'z' && str[i+1] == '=')) {
            i++;
        }
        count++;
    }

    cout << count << endl;

    return 0;
}