#include "lists.h"
/**
 * sum_listint - check the number of elements in a list
 *
 *@head: linked list type of listint_t
 *
 * Return: Always 0.
 */

int sum_listint(listint_t *head)
{
	size_t num = 0;

	if (!head)
		return (0);

	while (head)
	{
		num += head->n;
		head = head->next;
	}
	return (num);
}

