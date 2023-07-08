#include "main.h"

/**
 * get_endianness - this program checks the endianness of a machine
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
