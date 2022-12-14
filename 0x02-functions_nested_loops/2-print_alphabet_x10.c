#include "main.h"

/**
* print_alphabet_x10 - Print alphabets 10 times using the nested loop
*
* Return: On success 0
**/

void print_alphabet_x10(void)
{
	char c;
	int j;

	c = 'a', j = 1;

	for (j = 1; j <= 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

}
