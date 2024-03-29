#include <stdio.h>
#include <ctype.h>
#include "utilities.h"

#define MAXWORD 100

/* word frequency count */
main()
{
  struct tnode *root;
  char word[MAXWORD];

  root = NULL;
  while (getword(word, MAXWORD) != EOF)
    if (isalpha(word[0]))
      root = addtree(root, word);
  treeprint(root);
  return 0;
}
