/*
 * el.c
 *
 *  Created on: Dec 26, 2022
 *      Author: Sarah
 *      Program to insert an element into an array
 */
#include "stdio.h"
int main ()
{
	int a[100];
	int n, i, element,location;
	printf("Enter no of elements: ");
	fflush(stdin); fflush (stdout);
	scanf("%d",&n);
	while((n<=0)||(n>100))
	{
		printf("Error, elements should range from 1 to 10. \nEnter no of elements: ");
		fflush(stdin); fflush (stdout);
		scanf("%d",&n);
	}
	for (i=0; i<n; i++)
	{
		printf("Enter element %d: ",i+1);
		fflush(stdin); fflush (stdout);
		scanf("%d", &a[i]);
	}
	printf("Enter an element: ");
	fflush(stdin); fflush (stdout);
	scanf("%d", &element);
	printf("Enter a location: ");
	fflush(stdin); fflush (stdout);
	scanf("%d", &location);
	for(i=n; i>=location; i--)
	{
		a[i]=a[i-1];
	}
	n++;
	a[location-1]=element;
	for (i=0;i<n; i++)
	{
		printf("%d", a[i]);
	}

	return 0;
}

