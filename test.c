#include <stdio.h>

int main(){

    int x = 214748834;

    printf("%d\n", x == (int)(float)x);

    return 0;
}