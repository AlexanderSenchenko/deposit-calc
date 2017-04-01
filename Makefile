.PHONY: all clean

all: bin/deposit-calc

clean:
	rm -rf build/src/main.o build/src/deposit.o

bin/deposit-calc: build/src/main.o build/src/deposit.o
	gcc build/src/main.o build/src/deposit.o -o bin/deposit-calc

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o 

build/src/deposit.o: src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o
