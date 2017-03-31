NAME = bin/deposit-calc
BUILD = build/main.o build/deposit.o

.PHOMY: all clean

all: $(NAME)

clean:
	rm -rf $(BUILD)

$(NAME): $(BUILD)
	gcc $(BUILD) -o $(NAME)

build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o 

build/deposit.o: src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o
