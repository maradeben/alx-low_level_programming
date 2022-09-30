#include "main.h"

/**
 * _strlen - string length
 * Description: determine length of a string
 * @c: the string
 * Return: string length
 */

int _strlen(char *c)
{
	int count = 0;

	while (*(c + count) != 0)
		count++;
	return (count);
}
