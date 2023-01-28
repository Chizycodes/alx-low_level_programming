#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns number of element in a linked list_t list.
 * @h: pointer to the list_t list
 *
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem += 1;

		h = h->next;
	}

	return (elem);
}
