#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the head of list.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (*head == NULL)
		return (0);

	tmp = *head;
	val = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (val);
}
