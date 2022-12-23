#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: A pointer to copy src to.
 * @src: string to copy to the dest.
 * @n: bytes.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		desc[index] = src[index];

	for (index = src_len; index < n; index++)
		desc[index] = '\0';

	return (dest);
}
