#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head of a node
 * @head: pointer to be checked
 * Return: 0 if empty, else deleted node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
