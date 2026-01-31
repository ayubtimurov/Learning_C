#include <stdio.h>

int main() {
  /* the program that converts and prints several Celsius
    degrees to Fahrenheit using the formula  Fahrenheit = (9/5)*Celsius + 32 */
  float fahr, celsius;
  float lower, upper, step;
  
  lower = 0; // Start from the zero
  upper = 40; // End in 40
  step = 5; // Convert every 5 step of Celsius
  
  celsius = 0;
  printf("---Table of Celsius-Fahrenheit degrees---\n");
  while (celsius <= upper) {
    fahr = (9.0/5.0) * celsius + 32.0;
    printf("%10.0f", celsius);
    printf("C = %.1f", fahr);
    printf("F\n");
    celsius = celsius + step;
  }
  return 0;
}
