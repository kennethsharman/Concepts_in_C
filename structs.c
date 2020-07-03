/*
 * structs.c	Basics of structs in C
 *
 * Created on:	July 2, 2020
 * Author:	Ken
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{
	char name[20];
	int age;
};

int main()
{

	struct Person ken;
	
	strcpy(ken.name, "Ken Sharman");
	ken.age = 34;

	printf("Name: %s\n", ken.name);
	printf("Age: %d\n", ken.age);

	return 0;
}
