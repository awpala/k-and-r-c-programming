#include <stdio.h>
#include <ctype.h>
#include "utilities.h"

/* declarations */

#define MAXWORD 100
#define NKEYS (sizeof keytable / sizeof keytable[0])

struct key keytable[] = {
  "auto", 0,
  "break", 0,
  "case", 0,
  "char", 0,
  "const", 0,
  "continue", 0,
  "default", 0,
  "do", 0,
  "double", 0,
  "else", 0,
  "enum", 0,
  "extern", 0,
  "float", 0,
  "for", 0,
  "goto", 0,
  "if", 0,
  "int", 0,
  "long", 0,
  "register", 0,
  "return", 0,
  "short", 0,
  "signed", 0,
  "sizeof", 0,
  "static", 0,
  "struct", 0,
  "switch", 0,
  "typedef", 0,
  "union", 0,
  "unsigned", 0,
  "void", 0,
  "volatile", 0,
  "while", 0
};

/* count C keywords; pointer version */
main()
{
  char word[MAXWORD];
  struct key *p;

  while (getword(word, MAXWORD) != EOF)
    if (isalpha(word[0]))
      if ((p=binsearch(word, keytable, NKEYS)) != NULL)
        p->count++;
  for (p = keytable; p < keytable + NKEYS; p++)
    if (p->count > 0)
      printf("%d %s\n", p->count, p->word);
  return 0;
}
