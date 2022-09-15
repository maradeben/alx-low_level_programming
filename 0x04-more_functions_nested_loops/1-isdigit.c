#include <stdio.h>
#include "main.h"

/**
 * _digit - check case
 * Description: prints alphabets 10x
 * @c: an ASCII character
 * Return: 1 if it's uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= '48') && (c <= '57'))
		return (1);
	return (0);
}
