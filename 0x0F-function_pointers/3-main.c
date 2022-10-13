#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main calculator function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int a, b, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		puts("Error");
		exit(99);
	}

	result = f(a, b);
	printf("%d\n", result);

	return (0);
}
