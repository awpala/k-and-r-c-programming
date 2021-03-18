#include <string.h>
#include "utilities.h"

/* binsearch: find word in table[0]...table[n-1] */
int binsearch(char *word, struct key table[], int n)
{
  int cond;
  int low, high, mid;

  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low+high) / 2;
    if ((cond = strcmp(word, table[mid].word)) < 0)
      high = mid - 1;
    else if (cond > 0)
      low = mid + 1;
    else return mid;
  }
  return -1;
}
