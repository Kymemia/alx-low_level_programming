#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint - adds node at the beginning
 * @head: pointer to be checked
 * @n: int to be checked
 * Return: Null if unsuccessful,
 * else adds new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nexNode;

	if (!head || !n)
	{
		return (NULL);
	}
	nexNode = malloc(sizeof(listint_t));
	if (!nexNode)
	{
		return (NULL);
	}
	nexNode->n = n;
	nexNode->next = *head;
	*head = nexNode;
	return (nexNode);
}
