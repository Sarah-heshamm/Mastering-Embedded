/*
 * as.c
 *
 *  Created on: Dec 10, 2022
 *      Author: Sarah
 *      C Program to Print a Integer Entered by a User
 */

#include "stdio.h"
int main()
{
	int num;
	printf ("Enter an integer:");
	fflush (stdout);
	scanf ("%d",&num);
	printf("The integer selected is %d", num);
	return 0;
}
