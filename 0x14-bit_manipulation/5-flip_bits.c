#include "main.h"

/**
 * flip_bits - function that counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, incr = 0;
	unsigned long int prev;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		prev = xor >> i;
		if (prev & 1)
			incr++;
	}

	return (incr);
}
