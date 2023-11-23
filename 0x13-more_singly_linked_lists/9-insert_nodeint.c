#include "lists.h"
#include "stdlib.h"
/**
 * insert_nodeint_at_index - inserts node @ given position
 * @head: pointer to be checked
 * @idx: int to be checked
 * @n: int to be checked
 * Return: Null if failed, else inserts node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *plus;
	unsigned int count = 0;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		if (idx > 0)
		{
			plus = *head;
			do {
				if (count == idx)
				{
					new_node->next = plus->next;
					plus->next = new_node;
					return (new_node);
				}
				plus = plus->next;
				count++;
			} while (plus);
			if (idx > count)
			{
				free(new_node);
				return (NULL);
			}
		}
		else
			{
				new_node->next = *head;
				*head = new_node;
			return (new_node);
			}
	}
	return (NULL);
}
