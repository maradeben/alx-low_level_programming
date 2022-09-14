#include <stdio.h>

/**
 * main - main body
 * Description: sum of natural numbers below 1024 that are multiples of 3 or 5
 * Return: no return
 */
int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum += i;
	}
	print("%d\n", i)
	return (0);
}
