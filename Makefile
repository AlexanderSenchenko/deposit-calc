.PHONY: all clean test

all: bin/deposit-calc

clean:
	rm -rf build/src/main.o build/src/deposit.o

bin/deposit-calc: build/src/main.o build/src/deposit.o
	gcc build/src/main.o build/src/deposit.o -o bin/deposit-calc

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o 

build/src/deposit.o: src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o

test: build/src/deposit.o build/test/deposit_test.o build/test/main.o build/test/validation.o
	gcc build/src/deposit.o build/test/deposit_test.o build/test/main.o build/test/validation.o -o bin/deposit-calc-test

build/test/deposit_test.o: test/deposit_test.c
	gcc -I thirdparty -I src -c test/deposit_test.c -o build/test/deposit_test.o

build/test/main.o: test/main.c
	gcc -I thirdparty -I src -c test/main.c -o build/test/main.o

build/test/validation.o: test/validation.c
	gcc -I thirdparty -I src -c test/validation.c -o build/test/validation.o
