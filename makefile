polynomial: main_poly.o create_poly.o print_poly.o add_poly.o
	cc main_poly.o create_poly.o print_poly.o add_poly.o -o polynomial

main_poly.o: main_poly.c
	cc -c main_poly.c

create_poly.o: create_poly.c
	cc -c create_poly.c

print_poly.o: print_poly.c
	cc -c print_poly.c

add_poly.o: add_poly.c
	cc -c add_poly.c

#MakeFile for Polynomial Assignment
