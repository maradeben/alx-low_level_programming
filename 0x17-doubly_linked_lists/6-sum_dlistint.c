#include "lists.h"

/**
 * sum_dlistint - sum all data in a DLL
 * @head: pointer to the head node
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
