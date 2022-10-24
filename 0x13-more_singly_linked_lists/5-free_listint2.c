#include "lists.h"

/**
 * free_listint2 - free a list_t
 * @head: pointer to the head
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *next;
	listint_t *to_free = *head;

	if (head == NULL)
		return;

	while (to_free != NULL)
	{
		next = to_free->next;
		free(to_free);

		to_free = next;
	}

	head = NULL;
}
