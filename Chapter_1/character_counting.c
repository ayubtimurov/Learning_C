#include <stdio.h>

// count characters in input; 1st version

// int main() {
//     long nc;

//     nc = 0;
//     while (getchar() != EOF){
//         ++nc;
//     }
//     printf("%ld\n", nc);
// }


// Version 2

int main(){
    double nc;
    

    for (nc = 0; getchar() != '\n'; ++nc);
    printf("Your strings' length: %.0f\n", nc);
    return 0;
}