#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a DLL
 * @h: pointer to the head node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
