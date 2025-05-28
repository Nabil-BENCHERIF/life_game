CFLAGS := -g -Wall 

all:  tests_ecosys ecosys

ecosys.o: ecosys.c
	gcc $(GCC_FLAGS) -c ecosys.c 

main_tests.o: main_tests.c ecosys.h
	gcc $(GCC_FLAGS) -c main_tests.c -time

tests_ecosys: main_tests.o ecosys.o
	gcc $(GCC_FLAGS) -o tests_ecosys main_tests.o ecosys.o

clean:
	rm -f *.o *~ $(PROGRAMS)
