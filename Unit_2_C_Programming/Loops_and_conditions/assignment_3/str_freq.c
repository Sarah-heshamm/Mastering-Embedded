/*
 * str.c
 *
 *  Created on: Dec 28, 2022
 *      Author: Sarah
 *      Character Frequency in a string
 */

#include "stdio.h"
int main()
{
	char a[100], c;
	printf("Enter a sentence:\n");
	fflush (stdin); fflush (stdout);
	gets(a);
	printf("Enter a letter: ");
	fflush (stdin); fflush (stdout);
	scanf("%c",&c);
	int i, freq=0;
	for (i=0; a[i]!='\0';i++)
	{
		if(c==a[i])
			++freq;
	}
	printf("Frequency of character %c is %d", c, freq);
	return 0;
}
