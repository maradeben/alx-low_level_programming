#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at given index
 * @h: pointer to the head node
 * @idx: the index to insert at
 * @n: the data to insert
 * Return: address of new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *pre_node = *h;
	/* pre_node is the node before the new position */
	unsigned int i;

	if (new_node == NULL || h == NULL)
		return (NULL);
	new_node->n = n;

	/* check if index is 0, and node as head in that case */
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if ((*h) != NULL)
			(*h)->prev = new_node;
		*h = new_node;

		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		pre_node = pre_node->next;
		if (pre_node->next == NULL && i == idx - 1)
			return (add_dnodeint_end(h, n));
	}

	new_node->prev = pre_node;
	new_node->next = pre_node->next;
	pre_node->next = new_node;
	pre_node->next->prev = new_node;

	return (new_node);
}
