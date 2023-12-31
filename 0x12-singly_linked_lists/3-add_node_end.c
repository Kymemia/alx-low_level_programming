#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end- adds a new node at the end of the list
 * @head: ptr to be checked
 * @str: the str to be added in the node
 * Return: new_node if successfull else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node  = NULL;
	list_t *curr = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new_node;
	}
	return (new_node);
}
