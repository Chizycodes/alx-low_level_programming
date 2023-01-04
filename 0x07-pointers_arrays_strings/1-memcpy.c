#include "main.h"

/**
 * _memcpy - copies n bytes from the memory
 *	area of src to the memory area desc.
 * @src: pointer to the memory to be copied.
 * @dest: the pointer to the memory area to copy to.
 * @n: the number of bytes to be copied.
 *
 * Return: A pointer to desc.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (destination);
}
