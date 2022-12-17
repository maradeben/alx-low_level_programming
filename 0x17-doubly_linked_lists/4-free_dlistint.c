#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to the head node
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
