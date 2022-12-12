#include "lists.h"

/**
 * add_nodeint_end - add to end of list
 * @head: pointer to head node
 * @n: number to append
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;

	return (*head);
}
