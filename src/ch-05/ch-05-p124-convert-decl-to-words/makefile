CC=gcc
CFLAGS=-I.
DEPS = utilities.h
OBJ = main.o getch.o gettoken.o parse.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
