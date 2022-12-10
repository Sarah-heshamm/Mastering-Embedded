/*
 * largest.c
 *
 *  Created on: Dec 11, 2022
 *      Author: Sarah
 *      Finding the largest number
 */
#include "stdio.h"
int main()
{
	float x,y,z;
	printf("Enter 3 numbers:");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdin);
	scanf("%f",&y);
	fflush(stdin);
	scanf("%f",&z);
	fflush(stdin);
	if((x>y)&&(x>z))
		printf("The largest number is %f",x);
	if((y>x)&&(y>z))
		printf("The largest number is %f",y);
	if((z>x)&&(z>y))
		printf("The largest number is %f",z);

	return 0;
}

