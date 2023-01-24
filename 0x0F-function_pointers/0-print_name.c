#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - Function that prints a name
* @name: The name to be printed
*@f: The pointer to a function
* Return: The name
**/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
