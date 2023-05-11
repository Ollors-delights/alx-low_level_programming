#include "main.h"

int is_prime_number(int n)

/**
 * is_prime_number - says if a number is a prime or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n);
{
	if (n <= 1)
		return (0);
	return (actual_prime (n, n - 1));
}

/**
 * actual_prime - calculates if a numeber is a prime recursively
 * @n: number to evaluated
 * @i: iterator
 *
 * Return 1 if n is prime and 0 if not
 */

int actual_prime(int i, int n);
{
	if (1 == 1)
		return (1);

	if (n % 1 == 0 && 1 > 0)
		return (0);

	return (actual_prime(n, i - 1));
}



