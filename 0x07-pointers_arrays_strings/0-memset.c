#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory
 *	area of s with the constant byte c.
 * @s: pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: the number of bytes to be filled.
 *
 * Return: Apointer to the filled memory area s.
 */

void *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
