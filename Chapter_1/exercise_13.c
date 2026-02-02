#include <stdio.h>


int main(){
    int c, i, nw;
    int n_lt[10];

    nw = 0;
    for (i = 0; i < 10; i++){
        n_lt[i] = 0;
    }
    
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n'){
            n_lt[nw]++;
            if (nw == 1){
                printf(" = %d letter\n", nw);
            }
            else{
                printf(" = %d letters\n", nw);
            }
            nw= 0;
            continue;
        }
        else{
            putchar(c);
            nw++;
        }
    }
    printf("\n");
    printf("---My histogram---\n");
    for (i = 0; i < 10; i++){
        if (n_lt[i] == 0){
            continue;
        }
        else{
            printf("Length %d: ", i);
            for (int j = 0; j < n_lt[i]; j++){
                printf("*");
            }
            printf("\n");
        }
    }
}