/*
 * arrays.c	Basics of arrays in C
 *
 * Created on:	May 27, 2020
 * Author:	Ken
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array1[] = {1,2,3}; 	// declaration and assignment

	printf("array 1 = [%d, %d, %d] ", array1[0], array1[1], array1[2]);

	int array2[2];
	array2[0] = 10;
	array2[1] = 20;

	printf("array 2 = [%d, %d]", array2[0], array2[1]);

	return 0;
}
