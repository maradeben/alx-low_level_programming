#include "main.h"

/**
 * clear_bit - clear a bit (set to 0)
 * @n: number pointer
 * @index: index to clear
 * Return: 1 on success, or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 >> index);
	return (1);
}
