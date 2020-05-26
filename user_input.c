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
	char someString[20];

	printf("Enter a letter: ");
	scanf("%c", &letter);

	printf("Enter some integer: ");
	scanf("%d", &integer);

	printf("Enter some decimal number: ");
	scanf("%lf", &decimal);

	printf("Enter your name: ");
	scanf("%s", someString);
	// fgets(someString, 20, stdin) would get string w/ spaces
	
	printf("You entered %c, %d, %f\n", letter, integer, decimal);
	printf("Your name is %s\n", someString);
}
	
