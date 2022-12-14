#include "main.h"

/**
* _isalpha - Checks for alphabetic character
* @c: Alphabetic character being checked
* Return: 1  if c is a letter, lowercase or uppercase, 0 if anything else
**/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		if (c >= 91 && c <= 96)
		{
			return (0);
		}
		return (1);
	}
	return (0);
}
