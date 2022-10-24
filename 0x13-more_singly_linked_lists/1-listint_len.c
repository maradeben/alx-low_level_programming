#include "lists.h"

/**
 * listint_len - print all elements of a singly linked list
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n += 1;
		h = h->next;
	}

	return (n);
}
