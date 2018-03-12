
/* Main Code of Polynomial Assignment */

#include"header.h"

void main()
{
	POLY *h1,*h2,*h3;
	h1=h2=h3=0;

	printf("Enter 1st Polynomial Equation\n");
	create_poly(&h1);
	print_poly(h1);

	printf("Enter 2nd Polynomial Equation\n");
	create_poly(&h2);
	print_poly(h2);

	printf("\nAddition of 2 Polynomials\n");
	add_poly(h1,h2,&h3);
	print_poly(h1);
	print_poly(h2);
	print_poly(h3);
}
