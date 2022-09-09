#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main function of program
 * Description: Determines if a number is, or is greater or less than 0
 * Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}


	return (0);
}
