#include "main.h"

/**
 * int _islower(int c) - Prints the alphabet followed by a new line.
 *
 * Return: Always 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
