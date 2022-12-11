/*
 * sum.c
 *
 *  Created on: Dec 11, 2022
 *      Author: Sarah
 *      Calculating sum of natural numbers
 */
#include "stdio.h"
int main()
{
	int x;
	int sum=0;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	for(int i=0; i<=x; i++)
	{
		sum+=i;
	}
	printf("Sum=%d", sum);
	return 0;
}

