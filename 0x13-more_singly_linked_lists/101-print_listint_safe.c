#include "lists.h"

/**
 * print_listint_safe - print all elements of a singly linked list
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		exit(98);

	while (h != NULL)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
		n += 1;
	}

	return (n);
}
