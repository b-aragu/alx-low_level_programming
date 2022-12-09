#include <stdio.h>
#include <stdlib.h>
/**
*maim - main of the program
*Return: 0
**/

int main (void)
{
char c = 'a';

for (c = 'a'; c <= 'z'; c++)
{
	if (c == 'e' || c == 'q')
	{
		continue;
	}
	putchar(c);
}
putchar('\n');
return (0);
}
