all:libcalc.a libcalc.so

libcalc.a:
	gcc -c add.c
	gcc -c sub.c
	gcc -c mul.c
	gcc -c div.c
	ar -rcs libcalc.a add.o sub.o mul.o div.o

libcalc.so:
	gcc -c -fpic add.c
	gcc -c -fpic sub.c
	gcc -c -fpic mul.c
	gcc -c -fpic div.c
	gcc -shared add.o sub.o mul.o div.o -o libcalc.so
clean:
	rm *.o libcalc.*
