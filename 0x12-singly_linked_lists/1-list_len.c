#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - length of sincly linked list
 * @h: pointer to the head node of the list
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}

	return (count);
}
