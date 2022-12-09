#include <stdio.h>
#include <stdlib.h>
/**
* main - main function program
* Return: 0
**/
int main(void)
{
char c = 'a';

for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}

c = 'A';
for (c = 'A'; c <= 'Z'; c++)
{
        putchar(c);
}
putchar('\n');
return (0);
}
