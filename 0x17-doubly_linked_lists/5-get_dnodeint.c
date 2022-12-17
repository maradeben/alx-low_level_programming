#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node of a DLL
 * @head: pointer to the head node
 * @index: the index of node to return
 * Return: the nth node, or NULL if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
