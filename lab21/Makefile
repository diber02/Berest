targets = main.bin test.bin
CC = gcc
C_OPTS = -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./library/src library/src/lib.c

all: run

clean:
	rm -rf dist
prep: clean
	mkdir dist
compile: prep main.bin test.bin	

main.bin: project/main.c
	$(CC) $(C_OPTS) $< -o ./dist/$@ -lm

test.bin: library/test/test.c
	$(CC) $(C_OPTS) $< -o ./dist/$@ -lm

run: compile
	./dist/main.bin 
	

doxygen: prep
	doxygen Doxyfile
format: #TODO

tidy: # TODO
