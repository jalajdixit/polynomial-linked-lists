
/* Addition of 2 Polynomial Equations */

#include"header.h"

void add_poly(POLY *hp1,POLY *hp2,POLY **hptr)
{
	POLY *temp1,*temp2,*last,*new,var;

	while(hp1 && hp2)
	{
		new=malloc(sizeof(POLY));

		if(hp1->power>hp2->power)
		{
			*new=*hp1;
			if(*hptr==0)
			{
				new->next=*hptr;
				*hptr=new;
			}
			else
			{
				last=*hptr;
				while(last->next)
					last=last->next;
				new->next=last->next;
				last->next=new;
			}
			hp1=hp1->next;
		}
		else if(hp1->power<hp2->power)
		{
			*new=*hp2;
			if(*hptr==0)
			{
				new->next=*hptr;
				*hptr=new;
			}
			else
			{
				last=*hptr;
				while(last->next)
					last=last->next;
				new->next=last->next;
				last->next=new;
			}
			hp2=hp2->next;
		}
		else
		{
			new->coef=hp1->coef+hp2->coef;
			new->power=hp1->power;

			if(*hptr==0)
			{
				new->next=*hptr;
				*hptr=new;
			}
			else
			{
				last=*hptr;
				while(last->next)
					last=last->next;
				new->next=last->next;
				last->next=new;
			}
			hp2=hp2->next;
			hp1=hp1->next;
		}
	}

	while(hp1)
	{
		new=malloc(sizeof(POLY));

		*new=*hp1;
		if(*hptr==0)
		{
			new->next=*hptr;
			*hptr=new;
		}
		else
		{
			last=*hptr;
			while(last->next)
				last=last->next;
			new->next=last->next;
			last->next=new;
		}
		hp1=hp1->next;
	}
	while(hp2)
	{
		new=malloc(sizeof(POLY));	
	
		*new=*hp2;
		if(*hptr==0)
		{
			new->next=*hptr;
			*hptr=new;
		}
		else
		{
			last=*hptr;
			while(last->next)
				last=last->next;
			new->next=last->next;
			last->next=new;
		}
		hp2=hp2->next;
	}
}
