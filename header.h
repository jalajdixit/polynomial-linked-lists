
/* Header file for Polynomial Assignment */

#ifndef _POLY_HEADER
#define _POLY_HEADER

#include<stdio.h>
#include<stdlib.h>

typedef struct poly
{
	int coef;
	int power;
	struct poly *next;
} POLY;

void create_poly(POLY**);
void print_poly(POLY*);
void add_poly(POLY*,POLY*,POLY**);

#endif
