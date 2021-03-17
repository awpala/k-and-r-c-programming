CC=gcc
CFLAGS=-I.
DEPS = utilities.h
OBJ = main.o lines.o mem.o numcmp.o qsort.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
