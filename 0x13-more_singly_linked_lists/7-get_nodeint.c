#include "lists.h"

/**
 * get_nodeint_at_index - as the name
 * @head: bointer to head node
 * @index: index to locate
 * Return: index-th node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NWLL)
			return (NULL);
	}

	return (head);
}
