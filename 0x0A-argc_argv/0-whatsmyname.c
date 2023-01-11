#include <stdlib.h>
#include <stdio.h>

/**
* main - The main function of the 0-whatsmyname.c program
* @argc: number of argument counts.
* @argv: number of argument vector
* Return: name of program
**/

int main(int argc, char *argv[])
{
	int i;

	i = argc - argc;
	printf("%s\n", argv[i]);
	return (0);
}
