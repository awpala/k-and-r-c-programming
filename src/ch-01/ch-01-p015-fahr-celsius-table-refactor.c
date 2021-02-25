/* print Fahrenheit-Celsius table */

#include <stdio.h>

/* symbolic constants */
#define LOWER 0       /* lower limit of table */
#define UPPER 300     /* upper limmit */
#define STEP  20      /* step size */

main()
{
  int fahr;

  printf("Deg F\t\tDeg C\n");

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
