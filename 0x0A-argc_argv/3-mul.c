#include <stdlib.h>
#include <stdio.h>

/**
* main - function tht multiplies multiple numbers
* @argc: number of arguement counts
* @argv: number of arguements vector
* Return: the multiple of two numbers.
**/

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
