#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index to get
 * Return: bit at index, or -1 if not found
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (n >> index & 1);
}
