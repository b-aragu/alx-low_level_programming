#include "main.h"
/**
* print_numbers - Function that prints the numbers, from 0 to 9, followed by a new line.
*  Return: The digits 0-9 and a newline
**/

void print_numbers(void)
{
	int  c;

	c = 0;

	for (c = 0; c > 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
