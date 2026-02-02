#include <stdio.h>

int power(int m, int n);

int main(){
    int i;

    for (i = 0; i < 10; i++){
        printf("%d to the power of %d is %d; and to the power of %d is %d\n", i, 2, power(i, 2), -3, power(i, -3));
    }
    return 0;
}

int power(int base, int n){
    int i, p;

    p = 1;
    for (i = 1; i <= n; i++){
        p = p * base;
    }
    return p;
}