#include "main.h"

/**
 * print_diagonal - Draws a diagonal line.
 * @n: number of \ to be printed.
 */

void print_diagonal(int n)
{
	int num, space;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (num == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
