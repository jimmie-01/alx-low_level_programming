#include "main.h"
#include <stdio.h>

int check_prime(int n, int i)

/**
 * is_prime_number - Returns 1 if an integer is prime
 * and 0 otherwise
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	return (check_prime(n - 1));
}

/**
 * check_prime - calculate if a number is prime recursively
 * @n: number to evaluate
 * @i: Iterator
 * Return: 1 if n is prime, 0 otherwise
 */

int check_prime(int n, int i)
{
	if
		(i <= 1)
			return (0);
	if
		(n % i == 0 && i > 1)
		return (0);
	if
		((n / i) < i)
			return (1);
	return (check_prime(n, i + 1));
}
