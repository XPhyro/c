CC     = gcc
CFLAGS = -O3 -Wall
SRC    = main.c
OUT    = program

all: gcd

gcd: ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${OUT}

clean:
	rm -f ${OUT}

.PHONY: all clean
