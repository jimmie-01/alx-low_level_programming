#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion: Returns the natural square root of a number
 * @n: number to calculate the natural square root
 * Return: The natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

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
