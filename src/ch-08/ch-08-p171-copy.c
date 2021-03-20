#include <unistd.h>
/* 
  N.B. Ch. 8 code examples will use <unistd.h> instead of "syscalls.h"
  cf. https://stackoverflow.com/questions/7380591/what-happened-to-syscalls-h
*/

#define BUFSIZ 1024

/* copy input to output */
main()
{
  char buf[BUFSIZ];
  int n;

  while ((n = read(0, buf, BUFSIZ)) > 0)
    write(1, buf, n);
  return 0;
}
