#include <stdio.h>
#include <string.h>
#include "utilities.h"

/* convert declaration to words */
main()
{
  while (gettoken() != EOF) {   /* 1st token on line */
    strcpy(datatype, token);    /* is the datatype */
    out[0] = '\0';
    dcl();    /* parse reset of line */
    if (tokentype != '\n')
      printf("syntax error\n");
    printf("%s: %s %s\n", name, out, datatype);
  }
  return 0;
}
