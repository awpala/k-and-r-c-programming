#include <stdio.h>
#include <string.h>  /* provides strstr() */
#define MAXLINE 1000

int getLine(char *line, int max);

/*
  Run from command line as ./ch-05-p117-grep [-x] [-n] <pattern>
    -n flag indicates line number
    -x flag indicates exclude pattern
    (N.B. `-xn` can also be used instead of `-x -n`)

  Example run from terminal:
  $ ./ch-05-p117-grep -n test
  <user input>asdflasdflk
  <user input>test
  <program output>[2]:test

    (N.B. `Ctrl+D` to terminate program)
*/

/* grep: print lines that match pattern from 1st arg */
main(int argc, char *argv[])
{
  char line [MAXLINE];
  long lineno = 0;
  int c, except = 0, number = 0, found = 0;

  while (--argc > 0 && (*++argv)[0] == '-')
    while (c = *++argv[0])
      switch (c) {
        case 'x':
          except = 1;
          break;
        case 'n':
          number = 1;
          break;
        default:
          printf("grep: illegal option %c\n", c);
          argc = 0;
          found = -1;
          break;
      }
  if (argc != 1)
    printf("Usage: `-x -n <pattern>` or `-xn <pattern>`\n");
  else
    while (getLine(line, MAXLINE) > 0) {
      lineno++;
      if ((strstr(line, *argv) != NULL) != except) {
        if (number)
          printf("%ld:", lineno);
        printf("%s", line);
        found++;
      }
    }
  printf("\n");
  return found;
}

/* getLine: read a line, return length (cf. Section 1.9) */
int getLine(char *line, int max)
{
  int c, i;

  for (i=0; i<max-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}
