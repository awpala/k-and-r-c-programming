CC=gcc
CFLAGS=-I.
DEPS = utilities.h
OBJ = main.o getch.o getword.o tree.o treeprint.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
