#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: pointer to the head node
 * @index: the index of node to delete
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node = *head; /* the node to delete */
	unsigned int i;

	/* check if list is empty */
	if (*head == NULL)
		return (-1);
	
	if (index == 0)
	{
		del_node->next->prev = NULL;
		*head = del_node->next;
		free(del_node);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		del_node = del_node->next;
		if (del_node->next == NULL)
			return (-1);
	}

	del_node->next->prev = del_node->prev;
	del_node->prev->next = del_node->next;
	free(del_node);

	return (1);
}
