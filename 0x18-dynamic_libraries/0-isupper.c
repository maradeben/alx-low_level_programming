#include <stdio.h>
#include "main.h"

/**
 * _isupper - check case
 * Description: prints alphabets 10x
 * @c: an ASCII character
 * Return: 1 if it's uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
