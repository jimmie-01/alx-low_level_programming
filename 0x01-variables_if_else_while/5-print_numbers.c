#include <stdio.h>
/**
 * main - This program prints all single digits if base ten from 0
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
		putchar("%d", a);
	putchar('\n');
	return (0);
}
