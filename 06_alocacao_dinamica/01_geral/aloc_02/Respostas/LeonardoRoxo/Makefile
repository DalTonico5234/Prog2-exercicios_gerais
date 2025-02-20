all: compile clean run

debug_run: debug_compile clean run

compile:
	gcc *.c -c
	gcc *.o -o main

debug_compile:
	gcc -Wall -Wextra -Werror -g *.c -c
	gcc -Wall -Wextra -Werror -g *.o -o main

clean:
	rm *.o

run:
	./main

