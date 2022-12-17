#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: size of triangle.
 */

void print_triangle(int size)
{
	int num, index;

	if (size > 0)
	{
		for (num = 1; num <= size; num++)
		{
			for (index = size - num; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < num; index++)
				_putchar('#');

			if (num == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
