CC     = gcc
CFLAGS = -O3 -Wall
SRC    = main.c
OUT    = anagram

all: anagram

anagram: ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${OUT}

clean:
	rm -f anagram

install: all
	cp -f ${OUT} /usr/local/bin/${OUT}

uninstall:
	rm -f /usr/local/bin/${OUT}

.PHONY: all clean install uninstall
