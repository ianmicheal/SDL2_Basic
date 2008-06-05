CC	= gcc
CFLAGS = -O2 -Wall $(shell sdl-config --cflags)
LDFLAGS = $(shell sdl-config --libs)

all: basic
basic: basic.o font.o render.o keyboard.o

basic.o: basic.c misc.h
font.o: font.c misc.h
render.o: render.c misc.h
keyboard.o: keyboard.c

clean:
	rm -f *.o basic
test:	all
	./basic
