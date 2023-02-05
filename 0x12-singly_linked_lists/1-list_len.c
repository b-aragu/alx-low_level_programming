#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
* list_len - A function to a linked list
* @h: pointer to the list_t list
* Description: this prints a linked list element
* Return: The number of nodes
**/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
