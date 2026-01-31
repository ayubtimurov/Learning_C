#include <stdio.h>

int main(){
    char x[10];
    int i;

    for (i = 0; i<=8; i++){
        printf("%d\n", i);
        x[i] = '*';
    }
    printf("%s\n", x);
}