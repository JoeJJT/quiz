CC ?= gcc
CFLAGS_common ?= -O0 -Wall -std=gnu99

EXEC = iterative recursive
all: $(EXEC)

Main = main.c

iterative: $(Main) iterative.c
	$(CC) $(CFLAGS_common) -DITER -o $@ $(Main) $@.c

recursive: $(Main) recursive.c
	$(CC) $(CFLAGS_common) -DREC -o $@ $(Main) $@.c

clean:
	$(RM) $(EXEC) *.o perf.*
