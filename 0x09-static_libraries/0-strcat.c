#include "main.h"

/**
 * _strcat - strcat analog
 * Description: concat two strings
 * @_dest: first string
 * @_src: string to join
 * Return: the joined string
 */

char *_strcat(char *_dest, char *_src)
{
	int d_c = 0, s_c = 0;

	while (_dest[d_c] != '\0')
	{
		d_c++;
	}

	while (_src[s_c] != '\0')
	{
		*(_dest + d_c) = _src[s_c];
		d_c++;
		s_c++;
	}

	*(_dest + d_c) = '\0';

	return (_dest);
}
