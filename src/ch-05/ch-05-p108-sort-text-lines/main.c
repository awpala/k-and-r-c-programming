#include <stdio.h>
#include "utilities.h"

#define MAXLINES 5000       /* max #lines to be sorted */

char *lineptr[MAXLINES];    /* pointers to text lines */

/*
  N.B. In bash, type lines separated by \n's (i.e., Enter), then issue command `Ctrl+D` to execute lines sorting and writelines.
*/

/* sort input lines */
main()
{
  int nlines;   /* number of input lines read */

  if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
    qSort(lineptr, 0, nlines-1);
    printf("\n");
    writelines(lineptr, nlines);
    return 0;
  } else {
    printf("error: input too big to sort\n");
    return 1;
  }
}
