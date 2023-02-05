#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
* print_list - A function to a linked list
* @h: pointer to the list_t
* Return: The number of nodes
**/

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
