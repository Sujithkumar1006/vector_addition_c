all: main.out

main.out: main.o vectors.o 
	gcc -o main.out main.o vectors.o

main.o: main.c vectors.h
	gcc -c main.c

vectors.o: vectors.c
	gcc -c vectors.c

clean:
	rm -rf *.out
	rm -rf *.o