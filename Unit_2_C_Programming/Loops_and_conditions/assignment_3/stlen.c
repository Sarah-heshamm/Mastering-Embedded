/*
 * stlen.c
 *
 *  Created on: Dec 28, 2022
 *      Author: Sarah
 *      Program to count length of a string
 */

#include "stdio.h"
int main()
{
	char text[100];
	printf("Enter a string: \n");
	fflush (stdin); fflush (stdout);
	gets(text);
	int i, length=0;
	for (i=0; text[i]!='\0';i++)
	{
		length++;
	}
	printf("Length of string: %d",length);
	return 0;
}
