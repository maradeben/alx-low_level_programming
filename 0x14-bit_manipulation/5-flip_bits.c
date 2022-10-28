#include "holberton.h"

/**
 * flip_bits - get how many bits to flip to get one num from another
 * @n : first num
 * @m : num to derive
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t;
	int i = 0;

	t = n ^ m;
	while (t >= 1)
	{
		if ((t & 1) == 1)
		i++;
		t >>= 1;
	}
	return (i);
}
