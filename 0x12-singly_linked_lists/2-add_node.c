#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

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
 * add_node - add new node at beginning of list
 * @head: current head of list
 * @str: the data in the list
 * Return: address of new element or null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(size_t));
	int len = _strlen(str);

	if (str == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	if (new->str == NULL)
		return (NULL);
	return (*head);
}
