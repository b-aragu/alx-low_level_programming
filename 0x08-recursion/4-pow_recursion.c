#include "main.h"
#include <math.h>
/**
*  _pow_recursion - Function that returns value of x raised to power y
* @x: the number whose power is being calculated.
* @y: tHE number raised to
*  Return: -1 if y is lower than 0
**/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
