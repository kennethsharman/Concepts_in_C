/*
 * switch.c	Switch statement in C
 *
 * Created on:	June 11, 2020
 * Author:	Ken
 */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int num;

	printf("Enter an integer from 1-3: ");
	scanf("%d", &num);

	switch(num) {
	case 1:
		printf("You entered 1");	
		break;
	case 2:
		printf("You entered 2");
		break;
	case 3:
		printf("You entered 3");
		break;
	default:
		printf("Ooops. Something went wrong there");
	}

	return 0;
}
