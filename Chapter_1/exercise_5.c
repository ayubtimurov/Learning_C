#include <stdio.h>

#define LOW 0
#define UPPER 300
#define STEP 20

int main(){
    int fahr;

    printf("---Table of Fahrenheit-Celsius degrees in reverse order---\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - STEP){
        printf("%22d", fahr);
        printf("*F = %.1f", (5.0/9.0)*(fahr-32));
        printf("*C\n");
    }
    return 0;
}