#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
* print_dog - function that prints a struct dog
* @d: A pointer
**/

void print_dog(struct dog *d)
{
	if (d  != 0)
	{
		if (d->name != 0)
			{
			printf("Name: %s\n", (*d).name);
			printf("Age: %f\n", (*d).age);
			printf("Owner: %s\n", (*d).owner);
			}
		else
			{
			printf("Name: (nil)\n");
			}

	}
}
