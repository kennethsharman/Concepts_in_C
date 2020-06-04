/*
 * calculator.c		Simple calculator in C
 *
 * Created on:	June 3, 2020
 * Author: 	Ken
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	double num1;
	double num2;
	char op;

	printf("Enter first number: ");
	scanf("%lf", &num1);
	
	printf("Enter second number: ");
	scanf("%lf", &num2);

	printf("Enter desired operator (+,-,*, or /): ");
	scanf(" %c", &op);	// need space in front of %c

	double result;

	if(op == '+') {
		result = num1 + num2;
	} else if(op == '-') {
		result = num1 - num2;
	} else if(op == '*') {
		result = num1 * num2;
	} else {
		result = num1 / num2;
	}

	printf("%f %c %f = %f", num1, op, num2, result);

	return 0;
}
