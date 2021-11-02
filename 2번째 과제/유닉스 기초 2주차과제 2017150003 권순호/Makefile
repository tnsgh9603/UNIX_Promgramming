convert_exe : ascii.o convert.o expo.o sum.o main.o
	gcc -o conver_exe ascii.o convert.o expo.o sum.o main.o
ascii.o : ascii.c
	gcc -c -o ascii.o ascii.c
convert.o : convert.c
	gcc -c -o convert.o convert.c
expo.o : expo.c
	gcc -c -o expo.o expo.c
sum.o : sum.c
	gcc -c -o sum.o sum.c
main.o : main.c
	gcc -c -o main.o main.c
clean : 
	rm *.o convert_exe
