#include <stdio.h>
#include <stdlib.h>

/**
 * main - check how many coins aro needed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int c[] = {25, 10, 5, 2, 1}; /* coins */
	int coins = 0, i;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		change = atoi(argv[1]);

	if (change <= 0)
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (change >= c[i] && change > 0)
			{
				coins += change / c[i];
				change = change % c[i];
			}
		}

		printf("%d\n", coins);
	}
	return (0);
}
