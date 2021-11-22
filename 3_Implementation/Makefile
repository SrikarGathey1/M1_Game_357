#-*- Makefile -*-
# target: dependencies
#        action

output: main.o display.o gameplay.o
	gcc main.o display.o gameplay.o -o output

main.o: main.c
	gcc -c main.c

display.o: display.c display.h
	gcc -c display.c

gameplay.o: gameplay.c gameplay.h
	gcc -c gameplay.c

clean:
	rm *.o output
	
    