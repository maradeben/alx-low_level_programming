#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers passed
 * @separator: to print between nums
 * @n: count of numbers passed
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int next;
	va_list args;

	if (separator == NULL)
		separator = "";
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		next = va_arg(args, int);
		printf("%d", next);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
