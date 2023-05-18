#include "lists.h"
/**
 * dlistint_len - a function that lists length
 * @h: points to the head of the list
 * Return: number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
