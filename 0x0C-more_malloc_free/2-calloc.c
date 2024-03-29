#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: number of elements in array.
 * @size: size of each element in the array.
 *
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *fill;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	fill = mem;

	for (index = 0; index < (size * nmemb); index++)
		fill[index] = '\0';

	return (mem);
}
