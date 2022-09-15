#include <stdio.h>
#include "main.h"

/**
 * main - fizz buzz
 * Description: print fizz for multiples of 3,
 * buzz for mulitiples of 5, fizzbuzz if both
 * Return: none
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
