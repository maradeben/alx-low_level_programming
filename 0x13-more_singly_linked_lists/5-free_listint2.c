#include "lists.h"

/**
 * free_listint2 - free a list_t
 * @head: pointer to the head
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}

	head = NULL;
}
