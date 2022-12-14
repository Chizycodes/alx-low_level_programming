#include "main.h"

/**
 * print_alphabet - Prints the alphabet followed by a new line.
 *
 * Return: Always 0.
 *
*/

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');

	return (0);
}
