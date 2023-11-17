#include <stdlib.h>
#include "lists.h"

/**
 * free_list- frees a list_t
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
	{
		return;
	}
	while (head)
	{
		temp = head;
		head = head->next;
		temp->next = NULL;
		free(temp);
	}
}
