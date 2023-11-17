#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds node @ the start of list
 * @head: pointer to be checked
 * @str: string to be checked
 * Return: Null if fail,
 * address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nexNode;

	if (!head || !str)
	{
		return (NULL);
	}
	nexNode = malloc(sizeof(list_t));
	if (!nexNode)
	{
		return (NULL);
	}
	nexNode->str = strdup(str);
	nexNode->len = strlen(str);
	nexNode->next = *head;
	*head = nexNode;
	return (nexNode);
}
