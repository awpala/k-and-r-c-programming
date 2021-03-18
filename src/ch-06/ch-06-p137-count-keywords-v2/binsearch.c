#include <string.h>
#include "utilities.h"

/* binsearch: find word in table[0]...table[n-1]; pointer version */
struct key *binsearch(char *word, struct key *table, int n)
{
  int cond;
  struct key *low = &table[0];
  struct key *high = &table[n];
  struct key *mid;

  while (low < high) {
    mid = low + (high-low) / 2;
    if ((cond = strcmp(word, mid->word)) < 0)
      high = mid;
    else if (cond > 0)
      low = mid + 1;
    else
      return mid;
  }
  return NULL;
}
