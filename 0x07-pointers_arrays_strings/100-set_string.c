#include "main.h"

/**
 * set_string - double pointer demo
 * @s: string (double ptr)
 * @to: points to
 * Return: None
 */

void set_string(char **s, char *to)
{
	s = &to;
}
