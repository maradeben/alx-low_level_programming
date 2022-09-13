#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check alphabet
 * Description: checks if it's an alphabet
 * @c: an ASCII character
 * Return: 1 if it's lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	return (0);
}
