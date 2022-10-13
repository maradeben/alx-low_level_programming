#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - print anything
 * @format: array of variable types
 * Return: no return
 */

void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;
	char *sep = "";
	t_p printers[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(printers[j]).c)
			{
				printf("%s", sep);
				printers[j].printer(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_char - print a char
 * @arg_list: argument list to select next
 * Return: no return
 */
void print_char(va_list arg_list)
{
	printf("%c", va_arg(arg_list, int));
}

/**
 * print_int - print an int
 * @arg_list: argument list to select next
 * Return: no return
 */
void print_int(va_list arg_list)
{
	printf("%d", va_arg(arg_list, int));
}

/**
 * print_float - print a float
 * @arg_list: argument list to select next
 * Return: no return
 */
void print_float(va_list arg_list)
{
	printf("%f", va_arg(arg_list, double));
}

/**
 * print_string - print a string
 * @arg_list: argument list to select next
 * Return: no return
 */
void print_string(va_list arg_list)
{
	char *s = va_arg(arg_list, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
