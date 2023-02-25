#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* Ac: The character to print
*
* Return: on sucess 1.
*On error, -1 is returned, and errno is set approapriatelt.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
