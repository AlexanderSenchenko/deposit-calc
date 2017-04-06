.PHONY: all clean

all: bin/deposit-calc bin/deposit-calc-test

clean:
	rm -rf build/src/*.o build/test/*.o

bin/deposit-calc: build/src/main.o build/src/deposit.o src/deposit.h
	gcc -Wall -Werror build/src/main.o build/src/deposit.o -o bin/deposit-calc

build/src/main.o: src/main.c src/deposit.h
	gcc -Wall -Werror -c src/main.c -o build/src/main.o 

build/src/deposit.o: src/deposit.c src/deposit.h
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o

bin/deposit-calc-test: build/src/deposit.o build/test/deposit_test.o build/test/main.o build/test/validation.o src/deposit.h thirdparty/ctest.h
	gcc -Wall -Werror build/src/deposit.o build/test/deposit_test.o build/test/main.o build/test/validation.o -o bin/deposit-calc-test

build/test/deposit_test.o: test/deposit_test.c src/deposit.h thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/deposit_test.c -o build/test/deposit_test.o

build/test/main.o: test/main.c thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/main.c -o build/test/main.o

build/test/validation.o: test/validation.c src/deposit.h thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/validation.c -o build/test/validation.o
