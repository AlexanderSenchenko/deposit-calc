.PHOMY: all clean

all: bin/deposit-calc

clean:
	rm -rf build/main.o build/deposit.o

bin/deposit-calc: build/main.o build/deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit-calc

build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o 

build/deposit.o: src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o
