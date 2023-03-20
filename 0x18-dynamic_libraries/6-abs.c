#include "main.h"

/**
* _abs - computes the absolute number of an integer
* @c: The number rto be computed
* Return: Absolute value of number or integer
**/
int _abs(int c)
{

	if (c < 0)
{
	int abs_val;

	abs_val = c * -1;

	return (abs_val);
}
	return (c);
}
