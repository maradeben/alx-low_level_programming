#include <stdio.h>
#include "main.h"

/**
 * _islower - check case
 * Description: prints alphabets 10x
 * Return: 1 if it's lowercase, 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return 1;
	return 0;
}
