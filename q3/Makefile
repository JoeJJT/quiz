CC ?= gcc
CFLAGS_common ?= -O0 -Wall -std=gnu99

EXEC = iterative recursive
all: $(EXEC)
main: main.c

iterative: $(main) iterative.c
	$(CC) $(CFLAGS_common) -DITER -o $@ $(main) $@.c

recursive: $(main) recursive.c
	$(CC) $(CFLAGS_common) -DREC -o $@ $(main) $@.c

clean:
	$(RM) $(EXEC) *.o perf.*
