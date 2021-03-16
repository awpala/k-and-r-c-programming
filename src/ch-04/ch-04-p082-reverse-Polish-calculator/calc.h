#ifndef CALC_H
#define CALC_H

#define NUMBER '0'    /* signal that a number was found */

/* -- function prototypes -- */

/* stack.c */
void push(double);
double pop(void);
/* getop.c */
int getop(char []);
/* getch.c */
int getch(void);
void ungetch(int);

#endif /* CALC_H */
