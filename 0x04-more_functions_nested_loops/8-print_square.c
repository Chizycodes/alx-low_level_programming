#include "main.h"

/**
 * print_square -prints a square.
 * @size: size of square.
 */

void print_square(int size)
{
	int num, wid;

	if (n > 0)
	{
		for (num = 0; num < size; num++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (num == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
