#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list_t list.
 * @head: head of list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
