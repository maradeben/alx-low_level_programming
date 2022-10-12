#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - funotion to print different formats of name
 * @name: the name
 * @f: format-specific function
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
