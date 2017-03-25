clean:
	gcc -Wall -Werror -c src/main.c -o build/main.o
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit-calc
