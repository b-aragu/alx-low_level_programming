#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to head of list
 * Return: number of items in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count += 1;
	}
	return (count);
}
