TARGET = c-linkage.bin
CFLAGS = -c -Wall -Iinclude
OBJ    = main.o lib.o

.PHONY: run clean

all: run

%.o: %.c
	gcc $(CFLAGS) $*.c

c-linkage.bin: ${OBJ}
	gcc -o ${TARGET} $^

run: ${TARGET}
	@./${TARGET}

clean:
	rm -rf ${OBJ} ${TARGET}
