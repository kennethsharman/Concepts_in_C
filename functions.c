/*
 * functions.c		Basics of function declaration in C
 *
 * Created on:	May 29, 2020
 * Author:	Ken
 */

#include <stdio.h>
#include <stdlib.h>


double add(double num1, double num2) {
	double result = num1 + num2;
	return result;
}

int main()
{
	double number1 = 1.4;
	double number2 = 4.3;
	double sum = add(number1, number2);

	printf("%0.1f + %0.1f = %0.1f", number1, number2, sum); 

	return 0;
}

