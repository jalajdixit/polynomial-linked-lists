
/* Print Function of Polynomial Assignment */

#include"header.h"

void print_poly(POLY *hp)
{
	printf("\n");
	while(hp)
	{
		printf("%dx^%d ",hp->coef,hp->power);
		if(hp->next)
			printf("+ ");
		hp=hp->next;
	}
	printf("\n\n");
}
