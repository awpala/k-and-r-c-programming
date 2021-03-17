#ifndef UTILITIES_H
#define UTILITIES_H

/* function prototypes */

/* lines.c */
int readlines(char **, int);
void writelines(char **, int);
/* mem.c */
char *alloc(int);
void afree(char *);
/* numcmp.c */
int numcmp(char *, char *);
/* qsort.c */
void qSort(void **, int, int, int (*)(void *, void *));

#endif /* UTILITIES_H */
