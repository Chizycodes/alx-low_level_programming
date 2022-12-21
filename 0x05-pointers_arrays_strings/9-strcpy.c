#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src to @dest.
 * @dest: buffer to copy string to.
 * @src: source string to copy.
 *
 * Return: A pointer to @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
