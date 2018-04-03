CC = gcc
# add -Wextra and -Werror once you've sorted out the unused parameters: argc and argv stuff out
CFLAGS = -std=c99 -Wall -pedantic -g3

all: randomselect

test: randomselect
	./randomselect

randomselect: randomselect.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) randomselect *~
