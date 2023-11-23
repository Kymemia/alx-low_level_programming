#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node @ index
 * @head: pointer to be checked
 * @index: int to be checked
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *temp;
	listint_t *new_node;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	for (x = 0; temp != NULL && x < index - 1; x++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	new_node = temp->next;
	temp->next = temp->next->next;
	free(new_node);
	return (1);
}
