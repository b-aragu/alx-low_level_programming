#include <stdlib.h>
#include <stdio.h>

/**
* main - function tht returns number of arguments passed into it
* @argc: number of arguement count
* @argv: number of argument vector
* Return: number of arguements
**/

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	for (i = 0; i <  argc; i++)
	{
		sum += atoi(argv[i]);
	}
	i = argc - 1;

	printf("%d\n", i);

	return (0);
}
