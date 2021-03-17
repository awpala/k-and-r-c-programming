CC=gcc
CFLAGS=-I.
DEPS = calc.h
OBJ = main.o getch.o getop.o stack.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
