#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: pointer to be checked
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
