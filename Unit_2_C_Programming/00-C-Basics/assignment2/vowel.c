/*
 * vowel.c
 *
 *  Created on: Dec 11, 2022
 *      Author: Sarah
 *      Checking whether the alphabet entered is a vowel or not
 */
#include "stdio.h"
int main ()
{
	char a;
	printf("Enter an alphabet:");
	fflush(stdout);
	scanf("%c",&a);
	fflush(stdin);
	if((a=='a')||(a=='e')||(a=='i')||(a=='u')||(a=='o')||(a=='A')||(a=='E')||(a=='I')||(a=='U')||(a=='O'))
		printf("%c is a vowel", a);
	else printf("%c is not a vowel", a);
	return 0;
}

