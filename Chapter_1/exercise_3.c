#include <stdio.h>

/* print Fahrenheit-Celcius table
   for fahr = 0, 20, ..., 300 */
   
int main(){
  float fahr, celcius;
  float lower, upper, step;

  lower = 0;   /* lower limit of temperature scale */
  upper = 300;  /* upper limit */
  step = 20; /* step size */
  fahr = lower;
  printf("---Table of Fahrenheit-Celsius degrees---\n");
  while (fahr <= upper) {
    celcius = (5.0/9.0) * (fahr - 32.0);
    printf("%16.1f", fahr);
    printf("*F   = %6.1f", celcius);
    printf("*C\n");
    fahr = fahr + step;
  }
  return 0;
}
