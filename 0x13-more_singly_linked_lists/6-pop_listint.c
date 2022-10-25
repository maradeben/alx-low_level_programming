#include "lists.h"

/**
 * pop_listint - delete head node and returns its data
 * @head: pointer to head node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *new_head;

	if (head == NULL || *head == NULL)
		return (0);
	new_head = *head;
	data = new_head->n;
	*head = (*head)->next;
	free(new_head);
	return (data);
}
