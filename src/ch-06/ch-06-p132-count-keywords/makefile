CC=gcc
CFLAGS=-I.
DEPS = utilities.h
OBJ = main.o binsearch.o getch.o getword.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
