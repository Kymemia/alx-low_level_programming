#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * listint_len - returns no. of elements
 * @h: list to be checked
 * Return: accurate number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
