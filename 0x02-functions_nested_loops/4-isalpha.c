#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters
 * @c: Characters to be checked
 * Return: 1 for lowercase and uppercase character and 0 otherwise.
 */
int _isalpha(int c)
{
	if
		((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
		{
			return (1);
		}
	return (0);
}
