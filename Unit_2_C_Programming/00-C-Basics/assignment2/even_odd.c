/*
 * evenodd.c
 *
 *  Created on: Dec 11, 2022
 *      Author: Sarah
 *      Checking whether a number is even or odd
 */
#include"stdio.h"
int main()
{
	int x;
	printf("Enter an integer you want to check:");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	if((x%2)==0)
		printf("%d is even",x);
	else printf("%d is odd",x);
	return 0;
}

