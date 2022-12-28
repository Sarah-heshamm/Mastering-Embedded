/*
 * rv.c
 *
 *  Created on: Dec 28, 2022
 *      Author: Sarah
 *      String Reverse
 */

#include "stdio.h"
#include "string.h"
int main ()
{
	char text[100], temp;
	printf("Enter a string: ");
	fflush(stdin); fflush (stdout);
	gets(text);
	int i=0 , x=strlen(text)-1;
	while (i<x)
	{
		temp=text[i];
		text[i]=text[x];
		text[x]=temp;
		i++;
		x--;
	}
	printf("Reverse string: %s",text);
	return 0;
}
