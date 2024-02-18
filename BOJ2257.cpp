#include <iostream>
using namespace std;

char formula[105];
int i;

int chem(){

    int mass = 0;

    while(1){

        if(formula[i] == 0) break;

        if(formula[i] == '('){
            i++;
            mass += chem();
        }

        if(formula[i] == ')'){
            i++;
            if('0' < formula[i] && formula[i] <= 9){
                mass *= (formula[i] - '0');
                i++;
            }
        }

        return mass;

        if(formula[i] == 'H'){
            i++;
            if('0' < formula[i] && formula[i] <= '9'){
                mass += 1 * (formula[i] - '0');
                i++;
            }
            else mass += 1;
        }
        else if(formula[i] == 'C'){
            i++;
            if('0' < formula[i] && formula[i] <= '9'){
                mass += 12 * (formula[i] - '0');
                i++;
            }
            else mass += 12;
        }
        else if(formula[i] == 'O'){
            i++;
            if('0' < formula[i] && formula[i] <= '9'){
                mass += 16 * (formula[i] - '0');
                i++;
            }
            else mass += 16;
        }
    }
    return mass;
}


void def(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){

    cin >> formula;

    cout << chem() << endl;

    return 0;
}