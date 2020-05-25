/*
 * user_input.c		Basics of input in C
 *
 * Created on:	May 24, 2020
 * Author:	Ken
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char letter;
	int integer;
	double decimal;

	printf("Enter a letter: ");
	scanf("%c", &letter);

	printf("Enter some integer: ");
	scanf("%d", &integer);

	printf("Enter some decimal number: ");
	scanf("%lf", &decimal);
	
	printf("You entered %c, %d, %f", letter, integer, decimal);
}
	
