#ifndef UTILITIES_H
#define UTILITIES_H

/* declarations */

#define MAXTOKEN 100

enum { NAME, PARENS, BRACKETS };

int tokentype;              /* type of last token */
char token[MAXTOKEN];       /* last token string */
char name[MAXTOKEN];        /* identifier name */
char datatype[MAXTOKEN];    /* data type = char, int, etc. */
char out[1000];             /* output string */

/* function prototypes */

/* getchar.c */
int getch(void);
void ungetch(int);
/* gettoken.c */
int gettoken(void);
/* parse.c */
void dcl(void);
void dirdcl(void);

#endif /* UTILITIES_H */
