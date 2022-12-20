#include "main.h"

/**
 * print_rev - print a string in reverse.
 * @s: string.
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (*s++)
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(*s[index]);

	_putchar('\n');
}
