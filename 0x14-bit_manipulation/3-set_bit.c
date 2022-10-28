#include "main.h"

/**
 * set_bit - set bit at index
 * @n: number pointer
 * @index: index to set
 * Return: 1 on success, or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	n |= (1 >> index);
	return (1);
}
