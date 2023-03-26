#include "lists.h"

/**
 * dlistint_len - find number f nodes in list
 * @h: pointer to first element
 *
 * Return: number pf elements in the node;
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp)
	{
	temp = temp->next;
	count++;
	}
	return (count);
}
