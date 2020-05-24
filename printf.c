/*
 * printf.c	Simple output in C
 *
 * Created on: 	May 23, 2020
 * Author: 	Ken
 */


#include <stdio.h>

int main() 
{

	char firstName[] = "Ken";
	int age = 33;
	double decimal_num = 5.3;
   
	printf("%s\n", firstName); 	// argument of '%s' is a string
	printf("%d\n", age);		// argument of '%d' is an integer
	printf("%f\n", decimal_num);	// argument of '%f' is a double

	return 0;
}
