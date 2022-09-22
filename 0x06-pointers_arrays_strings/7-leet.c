#include "main.h"

/**
 * leet - encode
 * @s: string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	int s_t = 0,  a_t = 0, l = 5;
	/* string tracker, array tracker, array length */
	char str[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};

	while (s[s_t])
	{
		a_t = 0;

		while (a_t < l)
		{
			if (s[s_t] == str[a_t] || s[s_t] - 32 == str[a_t])
			{
				s[s_t] = num[a_t];
			}

			a_t++;
		}

		s_t++;
	}
	return (s);
}
