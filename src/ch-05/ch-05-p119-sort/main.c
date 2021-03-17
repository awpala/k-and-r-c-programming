#include <stdio.h>
#include <string.h>
#include "utilities.h"

#define MAXLINES 5000       /* max #lines to be sorted */
char *lineptr[MAXLINES];    /* pointers to text lines */

/* sort input lines */
main(int argc, char *argv[])
{
  int nlines;               /* number of input lines */
  int numeric = 0;          /* 1 if numeric sort */

  if (argc > 1 && strcmp(argv[1], "-n") == 0)
    numeric = 1;
    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
      qSort((void **) lineptr, 0, nlines-1,
        (int (*)(void *, void *))(numeric ? numcmp : strcmp)
      );
      printf("\n");
      writelines(lineptr, nlines);
      return 0;
    } else {
      printf("input too large to sort\n");
      return 1;
    }
}
