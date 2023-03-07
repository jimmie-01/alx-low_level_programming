#include "main.h"

/**
 * _memcpy - A funtion that copies memory area
 * @dest: Memory Storage
 * @src: Memory to copy from
 * @n: number of bytes
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for
		(;
		 r < i;
		 r++)
		{
			dest[r] = src[r];
			n--;
		}
	return (dest);
}

