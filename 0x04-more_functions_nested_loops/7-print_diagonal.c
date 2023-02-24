#include "main.h"
/**
 * print_diagonal - Draw a diagonal line on the terminal
 * @n: Number of lines to be printed
 */
void print_diaonal(int n)
{
	int x, y;

	if
		(n <= 0)
		{
			_putchar('\n');
		}
	else
	{
		for
			(x = 0;
			 x < n;
			 x++)
			{
				for
					(y = 0;
					 y < x;
					 y++)
					{
						_putchar(32);
					}
				_putchar(92);
				_putchar('\n');
			}
	}
}
