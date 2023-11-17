#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node  = malloc(sizeof(Node));
	list_t *curr = *head;

	if (new_node == NULL)
	{
		exit(3);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new_node;
		new_node->prev = curr;
	}
	return (new_node);
}
