#include <stdio.h>

int fibonacci(int);

/**
 * main - main function
 * Description: fibonacci calculator
 * Return: 0 for success
 */

int main(void)
{
	int fib, n;

	for (n = 1; n <= 50; n++)
	{
		printf("n is %d\n", n);
		fib = fibonacci(n);
		printf("%d", fib);
	}
	return (0);
}

/**
 * fibonacci - fib function
 * Description - calculates nth fibonacci number using recursion
 * @n: position of the number in fibonacci series
 * Return: the nth fibonacci number
 */
int fibonacci(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (fibonacci(n - 2) + fibonacci(n - 1));
}
