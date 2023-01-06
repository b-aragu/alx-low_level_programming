#include "main.h"

/**
* _sqrt_recursion: Returns the natural square root of a number
* @n: The natural number
* Return: -1 if the function does not have a natural square root
**/

int _sqrt_recursion(int n)
{
	int i;
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	i = _sqrt_recursion(n - 1);
	if ((i * i) == n)
		return (i);
	return (-1);
}
