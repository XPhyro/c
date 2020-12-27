CC     = gcc
CFLAGS = -O3 -Wall
SRC    = main.c
OUT    = gridise

all: gridise

gridise: ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${OUT}

clean:
	rm -f ${OUT}

.PHONY: all clean
