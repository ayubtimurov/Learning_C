#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int temperature_convertor(float f);

int main(){
    int i;

    printf("---Table of Fahrenheit-Celcius degrees---\n");
    for (i = LOWER; i <= UPPER; i = i + STEP){
        printf("%d*F = %d*C\n", i, temperature_convertor(i));
    }
    return 0;
}

int temperature_convertor(float f){
    float c;

    c = (5.0/9.0) * (f - 32.0);
    return c;
}