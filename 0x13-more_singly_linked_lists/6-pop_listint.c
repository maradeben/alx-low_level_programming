#include "lists.h"

/**
 * pop_listint - delete head node and returns its data
 * @head: pointer to head node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int data = (*head)->n;

	if (head == NULL)
		return (0);
	return (data);
}
