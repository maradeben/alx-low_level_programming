#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list arg_list);
void print_int(va_list arg_list);
void print_float(va_list arg_list);
void print_string(va_list arg_list);
void print_all(const char * const format, ...);

/**
 * struct type_print - map format and print function
 * @c: char representing the format
 * @printer: the print function
 */

typedef struct type_print
{
	char *c;
	void (*printer)(va_list);
} t_p;

#endif /* _VARIADIC_FUNCTIONS_H_ */
