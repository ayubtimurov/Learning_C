#include <stdio.h>

int main(){
    int c, i;
    char l[126];

    for (i = 0; i < 126; i++){
        l[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if (c != ' ' && c != '\t' && c != '\n'){
            l[c]++;
        }
        
    }
    for (i = 0; i < 126; i++){
        if (l[i] != 0){
            printf("%c| ", i);
            for (int j = 0; j < l[i]; j++){
                printf("*");
            }
            printf("\n");
        }
    }
    printf("\n");
}