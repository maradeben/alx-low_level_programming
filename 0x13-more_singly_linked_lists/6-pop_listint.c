#include "lists.h"

/**
 * pop_listint - delete head node and returns its data
 * @head: pointer to head node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int data = (*head)->n;
	listint_t *new_head = *head;

	if (head == NULL)
		return (0);
	*head = (*head)->next;
	free(new_head);
	return (data);
}
