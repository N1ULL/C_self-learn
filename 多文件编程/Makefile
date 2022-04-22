main.exe : main.o hello.o
	gcc main.o hello.o -o main.exe

main.o : main.c hello.h
	gcc -c main.c -o main.o

hello.o: hello.c hello.h
	gcc -c hello.c -o hello.o