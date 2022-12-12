#include "lists.h"

/**
 * free_list - free a list_t
 * @head: pointer to the head
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *the_next;

	while (head != NULL)
	{
		the_next = head->next;
		free(head->str);
		free(head);

		head = the_next;
	}
}
