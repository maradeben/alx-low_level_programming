#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int all_dig(char *s);
void _puts_recursion(char *s);
void print_number(int n);

/** main - multiply two nums
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
		_puts_recursion("Error");
		exit(98);
	}
	if (all_dig(argv[1]) == 0 || all_dig(argv[2]) == 0)
	{
		_puts_recursion("Error");
		exit(98);
	}
	prod = atoi(argv[1]) * atoi(argv[2]);
	print_number(prod);
	_putchar('\n');

	return(0);
}


/**
 * all_dig - check if each char of str is digit
 * s: string to check
 * Return: 1 or 0
 */
int all_dig(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= 48 && s[i] <= 57))
		       return (0);
	}
	return (1);
}

/**
 * _puts_recursion - puts analog
 * @s: the string to print
 * Return: None
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}

/**
 * print_number - short program
 * @n: number to print
 * Return: no return
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
