
/* Create the Polynomial Equation in a Single Linked List */

#include"header.h"

void create_poly(POLY **hptr)
{
	char op,rep;
	POLY *new,*last;

	do
	{
		new=malloc(sizeof(POLY));
		printf("Coeff  Power\n");
		scanf("%d %d",&new->coef,&new->power);

		if(*hptr==0 || (*hptr)->power<new->power)
		{
			new->next=*hptr;
			*hptr=new;
		}
		else
		{
			last=*hptr;
			while(last)
			{
				if(last->power==new->power)
				{
					printf("\t %dx^%d  already present !!\n",last->coef,last->power);
					printf("Replace the old element ? [Y/y]: ");
					scanf(" %c",&rep);

					if(rep=='y' || rep=='Y')
					{
						last->coef=new->coef;
						break;
					}
					else
					{
						free(new);
						break;
					}
				}
				else if(last->next==0 || last->next->power<new->power)
				{
					new->next=last->next;
					last->next=new;
					break;
				}
				last=last->next;
			}
		}

		printf("Add New Element ? [Y/y]: ");
		scanf(" %c",&op);
	}while(op=='y' || op=='Y');
}
