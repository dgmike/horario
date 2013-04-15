CC=gcc
CFLAGS=-c -I lib/ -Wall

all: clean
	$(CC) $(CFLAGS) hora.c -o hora.o
	$(CC) hora.o -o index.cgi
	rm -Rf *.o

clean:
	rm -Rf *.o *.cgi
	rm -Rf output
