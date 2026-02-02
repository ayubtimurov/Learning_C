#include <stdio.h>

#define IN 1
#define OUT 0

// If we gave any single or more charcters that doesn't have a meaning or any numberwill be counted as a word, becouse the programm is counting new word
// every time upon seeing new character. In this case the programm will fail to count the number of words.


int main(){
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF){
        nc++;
        if(c == '\n'){
            nl++;
        }
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }
        else if (state == OUT){
            state = IN;
            nw++;
        }
    }
    printf("Number of new_lines: %d\n", nl);
    printf("Number of words: %d\n", nw);
    printf("Number of characters: %d\n", nc);
}

