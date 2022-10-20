#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print elements of a singly linked list
 * @h: pointer to the head node of the list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count += 1;
		h = h->next;
	}

	return (count);
}
