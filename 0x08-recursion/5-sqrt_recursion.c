#include "main.h"

/**
 * _sqrt - Return the natural square root of a number
 * @n: Number to calculate its square root
 * @i: Iterator
 * Return: the resulting square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if
		(sqrt > n)
			return (-1);
	if
		(sqrt == n)
			return (i);
	return (_sqrt(n, i + 1));
}
