#include "main.h"

int check_prime(int n, int f);

/**
 * is_prime_number - check if number is prime
 * @n: number to check
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else
		return (check_prime(n, 3));
}

/**
 * check_prime - check prime
 * @n: number
 * @f: factor
 * Return: 1 for prime, 0 otherwise
 */

int check_prime(int n, int f)
{
	if (n % f == 0)
		return (0);
	else if ((n % f != 0) && (f <= (n / 2) + 1))
		return (check_prime(n, f + 2));
	else
		return (1);
}
