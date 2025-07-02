# Compiler flags -g for debug, -O3 for optimization
CFLAGS=-g -O3

# First target is built by default
all: tokenizer

# Include file dependencies
tokenizer.o: tokenizer.h

# Build tokenizer executable
tokenizer: tokenizer.o uimain.o
	cc -o $@ $^ $(CFLAGS)

# Compile uimain.c
uimain.o: uimain.c tokenizer.h
	cc -o $@ $^ $(CFLAGS)

# Clean
clean:
	rm -f *.o tokenizer

run:
	./tokenizer
