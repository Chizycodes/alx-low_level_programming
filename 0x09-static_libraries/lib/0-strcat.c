#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src, including
 *		the terminating null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to append to.
 * @src: string to append to the dest string.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
