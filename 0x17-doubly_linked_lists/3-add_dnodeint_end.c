#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of a DLL
 * @head: pointer to the head node
 * @n: the new data
 * Return: address of newelement, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	/* check for empty list */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* loop through to find current last node */
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
