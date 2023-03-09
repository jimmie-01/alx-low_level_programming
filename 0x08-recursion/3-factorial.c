#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: number to return the factorial from
 * Return: factorial of a
 */

int factorial(int n)
{
	if
		(n < 0)
			return (-1);
	if
		(n == 0)
		return (1);
	return (n * factorial(n - 1));
}
