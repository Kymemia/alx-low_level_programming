#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - returns the sum
 * @head: pointer to be checked
 * Return: 0 if list is empty, else return Sum
 */
int sum_listint(listint_t *head)
{
	int all = 0;

	if (head)
	{
		do {
			all += head->n;
			head = head->next;
		} while (head);
	}
	return (all);
}
