#include <stdio.h>
#include <string.h>

/**
* main - The main function  program
* @argc: The number of arguement count
* @argv: The number of arguement vector
* Return: the name of the compilaation file
**/
int main()
{
	char *fileName = strrchr(__FILE__, '/');

	if (fileName == NULL)
	{
		fileName = __FILE__;
	}
	else
	{
		fileName++;
	}
	printf("%s\n", fileName);
	return (0);
}
