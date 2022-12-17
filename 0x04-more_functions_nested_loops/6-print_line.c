#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 */

void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
