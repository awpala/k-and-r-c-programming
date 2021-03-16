#include "utilities.h"

/* strCpy: copy t to s; pointer version 3 */
void strCpy(char *s, char*t)
{
  while (*s++ = *t++)
    ;
}

/* strCmp: return <0 if s<t, 0 if s==t, >0 if s>t */
int strCmp(char *s, char *t)
{
  for ( ; *s == *t; s++, t++)
    if (*s == '\0')
      return 0;
  return *s - *t;
}
