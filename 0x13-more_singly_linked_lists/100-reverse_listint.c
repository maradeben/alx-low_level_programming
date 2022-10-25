#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to head node
 * Return: pointer to &irst node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *nxt;

	if (head == NULL || (*head)->next == NULL)
		return (NULL);

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
