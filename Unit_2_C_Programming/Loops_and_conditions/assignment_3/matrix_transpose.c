/*
 * transpose.c
 *
 *  Created on: Dec 26, 2022
 *      Author: Sarah
 *      Program to find transpose of a matrix
 */
#include "stdio.h"
int main()
{
	int a[100][100], b[100][100];
	int r, c, i, j;
	printf("Enter the number of rows: ");
	fflush(stdin); fflush (stdout);
	scanf ("%d",&r);
	while ((r<=0)||(r>100))
	{
		printf("Error, the number of rows should range from 1 to 100. \nEnter the number of rows: ");
		fflush(stdin); fflush (stdout);
		scanf("%d",&r);
	}
	printf("Enter the number of columns: ");
	fflush(stdin); fflush (stdout);
	scanf ("%d",&c);
	while ((c<=0)||(c>100))
	{
		printf("Error, the number of rows should range from 1 to 100. \nEnter the number of columns: ");
		fflush(stdin); fflush (stdout);
		scanf("%d",&c);
	}
	printf("Enter Elements of the matrix: \n");
	fflush (stdout);
	for (i=1; i<=r; i++)
	{
		for (j=1; j<=c; j++)
		{
			printf("Enter element a%d%d: ", i,j);
			fflush(stdin); fflush(stdout);
			scanf("%d", &a[i][j]);
		}
	}
	printf("Entered matrix: \n");
	for (i=1; i<=r; i++)
	{
		for (j=1; j<=c; j++)
		{
			printf("%d ", a[i][j]);
			if (j==c)
				printf("\n");
		}
	}
	for (i=1; i<=r; i++)
		{
			for (j=1; j<=c; j++)
			{
				b[j][i]=a[i][j];
			}
		}
	printf("Transpose matrix: \n");
	for (i=1; i<=c; i++)
		{
			for (j=1; j<=r; j++)
			{
				printf("%d ",b[i][j]);
				if(j==r)
					printf("\n");
			}
		}
	return 0;
}
