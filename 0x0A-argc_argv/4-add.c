#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
* main - function that add two numbers
* @argc: Number of arguements count

 * @argv: number of arguement vectors
* Return: the summation of two numbers.
**/

int main(int argc, char *argv[])
{
	int i, sum, temp;

	sum = 0;

		for (i = 1; i < argc; i++)
		{
			for (temp = 0; argv[i][temp] != '\0'; temp++)
			{
				if (!isdigit(argv[i][temp]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}

	printf("%d\n", sum);
	return (0);
}
