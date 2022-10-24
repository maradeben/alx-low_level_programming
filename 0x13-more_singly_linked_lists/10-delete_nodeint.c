#include "lists.h"

/**
 * delete_nodeint_at_index - delete index specified
 * @head: pointer to head node
 * @index: node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *next;
	unsigned int i;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
