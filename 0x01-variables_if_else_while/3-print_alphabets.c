#include <stdio.h>
/**
 * main - This program prints alphabet in lowercase and uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	char lo;
	char up;

	lo = 'a';
	up = 'A';
	while
		(lo <= 'z')
		{
			putchar(lo);
			lo++;
		}
	while
		(up <= 'z')
		{
			putchar(lo);
			up++;
		}
	return (0);
}
