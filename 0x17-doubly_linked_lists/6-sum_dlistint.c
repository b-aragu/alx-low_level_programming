#include "lists.h"

/**
 * sum_dlistint - print the sum of elements
 * @head: pointer to the head of the list
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = head;

	while (temp)
	{
	count += temp->n;
	temp = temp->next;
	}
	return (count);
}

