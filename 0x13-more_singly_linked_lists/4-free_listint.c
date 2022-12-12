#include "lists.h"

/**
 * free_listint - free a list_t
 * @head: pointer to the head
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);

		head = next;
	}
}
