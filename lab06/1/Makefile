targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -Wno-unused-variable -I./src

all: clean compile run

clean:
	rm -rf main.bin
compile: main.bin

main.bin: main.c
	$(CC) $(C_OPTS) $< -o ./$@
run: clean compile
	./main.bin

