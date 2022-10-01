#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply args only if 2
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
