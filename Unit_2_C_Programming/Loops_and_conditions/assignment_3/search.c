/*
 * search.c
 *
 *  Created on: Dec 27, 2022
 *      Author: Sarah
 *      Program to search for an element in an array
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
	printf("Enter the element to find: ");
	fflush(stdin); fflush (stdout);
	scanf("%d",&element);
	i=0;
	while(i<n && element!=a[i])
		i++;
	if(i<n)
	{
		location=i+1;
	printf("Element found at location %d", location);
	}
	else printf("Element not found.");
return 0;
}
