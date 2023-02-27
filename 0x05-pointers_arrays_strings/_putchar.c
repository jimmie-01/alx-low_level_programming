#include <unistd.h>

/**
 * _putchar - writes the character c ti the stdout;
 * @c: The character to print
 * Return: on success 1.
 * on, error, -1 is required and errno is set appropriatley
 */

int _putchar(char c)
{
	return (write(1, &c, 1);
}
