#include "function_pointers.h"

/**
 * print_name - funotion to print different formats of name
 * @name: the name
 * @f: format-specific function
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
