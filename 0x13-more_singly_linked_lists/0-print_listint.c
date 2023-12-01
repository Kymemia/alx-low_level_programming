#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - prints elements of list
 * @h: list to be checked
 * Return: printed elements
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *pr = h;
	size_t i = 0;

	while (pr != NULL)
	{
		printf("%d\n", pr->n);
		pr = pr->next;
		i++;
	}
	return (i);
}
