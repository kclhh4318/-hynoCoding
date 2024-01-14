#include <iostream>
using namespace std;

int main(){

    string subject;
    string rate;
    double hak, hakSum = 0.0, avgSum = 0.0;

    for(int i = 0; i < 20; i++){
        double temp;
        cin >> subject >> hak >> rate;

        if(rate == "P"){
            continue;
        }
        else if(rate == "A+") avgSum += (4.5 * hak);
        else if(rate == "A0") avgSum += (4.0 * hak);
        else if(rate == "B+") avgSum += (3.5 * hak);
        else if(rate == "B0") avgSum += (3.0 * hak);
        else if(rate == "C+") avgSum += (2.5 * hak);
        else if(rate == "C0") avgSum += (2.0 * hak);
        else if(rate == "D+") avgSum += (1.5 * hak);
        else if(rate == "D0") avgSum += (1.0 * hak);
        else if(rate == "F") avgSum += (0.0 * hak);
        hakSum += hak;
    }

    cout << (double)avgSum / (double)hakSum << endl;


    return 0;
}