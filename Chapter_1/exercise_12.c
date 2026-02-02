#include <stdio.h>


int main(){
    int c, state;

    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            printf("\n");
            continue;
        }
        putchar(c);
    }
}