#ifndef UTILITIES_H
#define UTILITIES_H

/* function prototypes */

/* lines.c */
int readlines(char **, int);
void writelines(char **, int);
/* mem.c */
char *alloc(int);
void afree(char *);
/* qsort.c */
void qSort(char **, int, int);
/* str.c */
void strCpy(char *, char *);
int strCmp(char *, char *);

#endif /* UTILITIES_H */
