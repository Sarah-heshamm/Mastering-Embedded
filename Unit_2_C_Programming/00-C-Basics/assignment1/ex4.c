/*
 * mul.c
 *
 *  Created on: Dec 11, 2022
 *      Author: Sarah
 *      C Program to Multiply two Floating Point Numbers
 */
#include "stdio.h"
int main()
{
	float x,y;
	printf("Enter two numbers:");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdin);
	scanf("%f",&y);
	fflush(stdin);
	float z=x*y;
	printf("Product: %f",z);
	return 0;
}

