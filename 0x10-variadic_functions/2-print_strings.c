#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - print strings passed
 * @separator: to print between strings
 * @n: count of strings passed
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *next;
	va_list args;

	if (separator == NULL)
		separator = "";
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		next = va_arg(args, char*);
		if (next == NULL)
			next = "(nil)";
		printf("%s", next);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
