#include "main.h"

/**
 * _memcpy - copies n bytes from the memory
 *	area of src to the memory area desc.
 * @src: pointer to the memory to be copied.
 * @desc: the pointer to the memory area to copy to.
 * @n: the number of bytes to be copied.
 *
 * Return: A pointer to desc.
 */

void *_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (destination);
}
