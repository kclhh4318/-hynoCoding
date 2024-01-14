#include <iostream>
using namespace std;

int main(){

    string subject;
    string rate;
    double hak, avg_rate = 0.0;
    int pf_cnt = 0;

    for(int i = 0; i < 20; i++){
        int temp;
        cin >> subject >> hak >> rate;

        if(rate == "P"){
            pf_cnt++;
            continue;
        }
        else if(rate == "A+"){
            temp = 4.5 * hak;
            avg_rate += temp;
        }
        else if(rate == "A0"){
            temp = 4.0 * hak;
            avg_rate += temp;
        }
        else if(rate == "B+"){
            temp = 3.5 * hak;
            avg_rate += temp;
        }
        else if(rate == "B0"){
            temp = 3.0 * hak;
            avg_rate += temp;
        }
        else if(rate == "C+"){
            temp = 2.5 * hak;
            avg_rate += temp;
        }
        else if(rate == "C0"){
            temp = 2.0 * hak;
            avg_rate += temp;
        }
        else if(rate == "D+"){
            temp = 1.5 * hak;
            avg_rate += temp;
        }
        else if(rate == "D0"){
            temp = 1.5 * hak;
            avg_rate += temp;
        }
        else if(rate == "F"){
            avg_rate += 0;
        }
    }

    cout.precision(6);
    cout << avg_rate / (double)(20 - pf_cnt) << endl;


    return 0;
}