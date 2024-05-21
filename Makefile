build: main.c node.c student.c 
			gcc -o student.o -c student.c 
			gcc -o node.o -c node.c
			gcc -o main.o -c main.c
			gcc -o 13 student.o node.o main.o
clean: 
	- rm *.o 2>/dev/bull
