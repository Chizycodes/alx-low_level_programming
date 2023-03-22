#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @n: element to be added to new node.
 * @head: pointer to the head of list.
 *
 * Return: address to new element or NULL if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
