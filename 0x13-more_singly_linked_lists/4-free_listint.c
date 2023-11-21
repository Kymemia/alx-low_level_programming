#include "lists.h"
#include <stdlib.h>
/**
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
	{
		return;
	}
	while (head)
	{
		temp = head;
		head = head->next;

		if (temp->str)
			free(temp->str);

		temp->next = NULL;
		free(temp);
	}
}
