#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a given decimal number
 * @n: number
 * @index: index of the bit
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_res;

	if (index > 63)
		return (-1);

	bit_res = (n >> index) & 1;

	return (bit_res);
}
