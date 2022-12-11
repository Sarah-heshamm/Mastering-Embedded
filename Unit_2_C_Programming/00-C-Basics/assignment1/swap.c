/*
 * swap.c
 *
 *  Created on: Dec 11, 2022
 *      Author: Sarah
 *      Swapping two numbers
 */
#include "stdio.h"
int main()
{
	float a,b;
	printf("Enter value for a:");
	fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);
	printf("Enter value for b:");
	fflush(stdout);
	scanf("%f",&b);
	fflush(stdin);
	float x;
	x=a;
	a=b;
	b=x;
	printf("a=%f",a);
	printf("b=%f",b);

	return 0;
}

