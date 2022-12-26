/*
 * avg_array.c
 *
 *  Created on: Dec 26, 2022
 *      Author: Sarah
 *      Program to calculate average using arrays
 */
#include "stdio.h"
int main ()
{
	float a[100], sum=0, avg;
	int n, i;
	printf("EnterThe number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	while((n<=0)||(n>100))
	{
		printf("Error, the range should be from 1 to 100. \n Please enter another number: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &n);
	}
	for(i=1; i<=n; i++)
	{
		printf("Enter number: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &a[i]);
		sum=sum+a[i];
		if(i==n)
			avg=sum/i;
	}
	printf("Average=%f",avg);
	fflush (stdout);
	return 0;
}

