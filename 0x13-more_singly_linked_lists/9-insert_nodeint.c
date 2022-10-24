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
	listint_t *current = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->n = n;

	/* if index is 0, insert at beginning */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx; i++)
	{
		current = current->next;
		/* check for idx out of range */
		if (current == NULL)
			return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
