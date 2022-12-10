/*
 * add.c
 *
 *  Created on: Dec 11, 2022
 *      Author: Sarah
 *      C Program to Add Two Integers
 */

#include "stdio.h"
int main()
{
	int x,y;
	printf("Enter two integars to add:");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	scanf("%d",&y);
	int z;
	z=x+y;
	printf("Total=%d",z);
}
