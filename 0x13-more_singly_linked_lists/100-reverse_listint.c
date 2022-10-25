#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to head node
 * Return: pointer to &irst node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *nxt;

	if (head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}

	*head = prev;
	return (*head);
}
