#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: pointer to be checked
 * @n: int to be added
 * Return: new_node if successful, else print NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new_node;
	}
	return (new_node);
}
