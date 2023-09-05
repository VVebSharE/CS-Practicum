
stackArray: driver.c stackapp.o
	gcc -o driver.c stackapp.o

stackLL: driver.c stackll.o
	gcc -o driver.c stackll.o

stackll.o: stackll.c 
	gcc -c stack.c

stackapp.o: stackapp.c
	gcc -c stackapp.c

clean:
	rm -f *.o *.exe