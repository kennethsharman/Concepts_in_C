/*
 * calculator.c		Simple calculator in C
 *
 * Created on:	May 25, 2020
 * Author: 	Ken
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;

	printf("Enter first integer: ");
	scanf("%d", &num1);
	printf("Enter second integer: ");
	scanf("%d", &num2);

	printf("%d + %d = %d", num1, num2, num1+num2);

	return 0;
}
