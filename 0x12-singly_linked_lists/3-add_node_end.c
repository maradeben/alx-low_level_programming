#include "lists.h"

/**
 * _strlen - string length
 * Description: determine length of a string
 * @c: the string
 * Return: string length
 */
int _strlen(const char *c)
{
	int count = 0;

	while (*(c + count) != 0)
		count++;
	return (count);
}

/**
 * add_node_end - add node to end of a singly linked list
 * @head: pointer to head node of list
 * @str: data of new node
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *append = malloc(sizeof(list_t));
	list_t *last = *head;

	if (append == NULL)
		return (NULL);

	append->str = strdup(str);
	append->len = _strlen(str);
	append->next = NULL;

	if (*head == NULL)
	{
		*head = append;
		return (*head);
	}
	
	while (last->next != NULL)
		last = last->next;
	last->next = append;

	return (*head);
}
