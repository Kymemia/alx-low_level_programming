#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - checks nth node of list
 * @head: pointer to be checked
 * @index: int to be checked
 * Return: Null if node doesn't exist,
 * else return nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	for (count = 0; head && count != index; count++)
	{
		head = head->next;
	}
	return (head);
}
