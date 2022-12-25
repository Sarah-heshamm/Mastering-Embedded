/*
 * avg.c
 *
 *  Created on: Dec 25, 2022
 *      Author: Sarah
 *      Program that calculates the average of given numbers
 */
#include "stdio.h"
int main()
{
	float num, sum=0, avg;
	int n, i;
	printf("Enter max number of inputs: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for (i=0; i<n ; i++)
	{
		printf("Enter number %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &num);
		if(num<0)
		{
			break;
		}
		sum=sum+num;

	}
	avg=sum/i;
	printf("Average= %f", avg);
		return 0;
}

