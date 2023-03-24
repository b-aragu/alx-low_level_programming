#include "lists.h"
/**
 * listint_len - check the number of elements in a list
 *
 *@h: linked list type of listint_t
 *
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
