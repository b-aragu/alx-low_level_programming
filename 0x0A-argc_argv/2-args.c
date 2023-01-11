#include <stdlib.h>
#include <stdio.h>

/**
* main - prints all arguements received
* @argc: number of arguements count
* @argv: number of arguement vector
* Return: The all arguements received
**/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
