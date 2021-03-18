#ifndef UTILITIES_H
#define UTILITIES_H

/* declarations */

struct tnode {            /* the tree node: */
  char *word;               /* points to the text */
  int count;                /* number of occurrences */
  struct tnode *left;       /* left child */
  struct tnode *right;      /* right child */
};

/* function prototypes */

/* getch.c */
int getch(void);
void ungetch(int);
/* getword.c */
int getword(char *, int);
/* tree.c */
struct tnode *talloc(void);
char *strDup(char *);
struct tnode *addtree(struct tnode *, char *);
/* treeprint.c */
void treeprint(struct tnode *);

#endif /* UTILITIES_H */
