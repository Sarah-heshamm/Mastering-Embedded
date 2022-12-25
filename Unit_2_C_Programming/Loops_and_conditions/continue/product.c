/*
 * cont.c
 *
 *  Created on: Dec 25, 2022
 *      Author: Sarah
 *      Product of 4 integers skipping zero
 */
#include "stdio.h"
int main()
{
	int num, i, product=1;
	for(i=0; i<4; i++)
	{
		printf ("Enter integer %d: ", i+1);
		fflush (stdin); fflush (stdout);
		scanf ("%d",&num);
		if(num==0)
			continue;
		product=product*num;
	}
	printf("Product=%d",product);
	return 0;
}

