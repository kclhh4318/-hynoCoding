#include <iostream>
#include <ctime>
#include<iomanip>
using namespace std;

int main(){

    time_t tt = time(NULL);
    tm* t = localtime(&tt);

    cout << setfill('0') << setw(4) << t->tm_year + 1900 << '-' << setw(2) << t->tm_mon + 1 << '-' << setw(2) << t->tm_mday << '\n';

    return 0;
}