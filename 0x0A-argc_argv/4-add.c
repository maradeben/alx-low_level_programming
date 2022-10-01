#include <stdio.h>
#include <stdlib.h>

/**
 * main - add only positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
				result += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", result);
	return (0);
}
