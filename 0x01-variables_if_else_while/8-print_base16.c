#include <stdio.h>
#include <stdlib.h>
/**
* main - main function program
* Return: 0
**/
int main(void)
{
char c = '0';

for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}

c = 'A';
for (c = 'A'; c <= 'F'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
