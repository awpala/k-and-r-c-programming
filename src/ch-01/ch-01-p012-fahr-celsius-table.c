#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300; floating-point version */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;      /* lower limit of temperature table */
  upper = 300;    /* upper limit */
  step = 20;      /* step size */

  printf("Deg F\t\tDeg C\n"); /* cf. Exercise 1-3, p. 13 */

  fahr = lower; /* N.B. lower is converted to float before assignment */
  while (fahr <= upper) { /* N.B. upper is converted to float before comparison */
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
