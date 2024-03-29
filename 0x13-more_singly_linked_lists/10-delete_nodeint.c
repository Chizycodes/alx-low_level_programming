#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - delete a new node at a given position.
 * @head: pointer to the head of list.
 * @index: index.
 *
 * Return: 1 or -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *tmp, *copy = *head;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);

	return (1);
}
