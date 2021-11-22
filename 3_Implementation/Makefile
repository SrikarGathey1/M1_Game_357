#-*- Makefile -*-
# target: dependencies
#        action



output: main.o display.o gameplay.o
	gcc main.o display.o gameplay.o -o output

main.o: src/main.c
	gcc -c main.c

display.o: src/display.c inc/display.h
	gcc -c display.c

gameplay.o: src/gameplay.c inc/gameplay.h
	gcc -c gameplay.c

clean:
	rm *.o output
	
    