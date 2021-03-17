#include <stdio.h>
#include "utilities.h"

#define SIZE 5

main()
{
  int n, array[SIZE], getint(int *);

  printf("Enter %d integers separated by white space and then hit `ENTER`:\n", SIZE);

  for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
    ;

  printf("\n`getint` calls completed...\n");

  return 0;
}
