#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function of program
 * Description: check size of last digit in number
 * Return: 0 on succes
 */

int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;

	if (rem > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, rem);
	}

	else if (rem == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, rem);
	}

	else if ((rem < 6) && (rem != 0))
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, rem);
	}

	return (0);
}
