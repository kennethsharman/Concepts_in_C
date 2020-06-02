/*
 * if_statements.c	Basics of if statements in C
 *
 * Created on:	June 1, 2020
 * Author:	Ken
 */

#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2) {
	int result;
	if (num1>num2) {
		result = num1;
	} else {
		result = num2;
	}
	return result;	
}

int main()
{
	printf("%d", max(3,9));

	return 0;
}
