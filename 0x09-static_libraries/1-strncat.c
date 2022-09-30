#include "main.h"

/**
 * _strncat - strncat analog
 * Description: concat two strings, limin n
 * @dest: first string
 * @src: string to join
 * @n: the limit bytes
 * Return: the joined string
 */

char *_strncat(char *dest, char *src, int n)
{
	int d_c = 0, s_c = 0, tracker = 0;

	/* get length of dest */
	while (dest[d_c] != '\0')
		d_c++;

	/* get length of src */
	while (dest[s_c] != '\0')
		s_c++;


	while (tracker < n && tracker < s_c)
	{
		*(dest + d_c) = src[tracker];
		d_c++;
		tracker++;
	}

	if (n < s_c)
		*(dest + d_c) = '\0';

	return (dest);
}
