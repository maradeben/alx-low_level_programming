#include "lists.h"

/**
 * insert_nodeint_at_index - as the name
 * @head: pointer to head node
 * @idx: index to insert at
 * @n: data to insert
 * Return: address of new node or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *prev;
	listint_t *next = *head;
	unsigned int i;

	if (new == NULL)
		return (NULL);
	new->n = n;
	for (i = 0; i < idx; i++)
	{
		prev = next;
		next = next->next;
		/* check for idx out of range */
		if (next == NULL)
			return (NULL);
	}

	prev->next = new;
	new->next = next;

	return (next);
}
