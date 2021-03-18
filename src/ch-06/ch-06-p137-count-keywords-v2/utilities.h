#ifndef UTILITIES_H
#define UTILITIES_H

/* declarations */

struct key {
  char *word;
  int count;
};

/* function prototypes */

/* binsearch. */
struct key *binsearch(char *, struct key *, int);
/* getch.c */
int getch(void);
void ungetch(int);
/* getword.c */
int getword(char *, int);

#endif /* UTILITIES_H */
