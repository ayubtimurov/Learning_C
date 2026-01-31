#include <stdio.h>

// count number of blank spaces 
int main(){
    int c, spaces = 0, tabs = 0, newlines = 0;

    
    while ((c = getchar()) != EOF){
        if (c == ' '){
            spaces++;
        }
        else if (c == '\t'){
            tabs++;
        }
        else if (c == '\n'){
            newlines++;
        }
    }
    printf("Number of blank spaces: %d\n", spaces);
    printf("Number of tabs: %d\n", tabs);
    printf("Number of newlines: %d\n", newlines);
    return 0;
}

