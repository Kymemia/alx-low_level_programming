#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints list's elements
 * @h: pointer to be checked
 * Return: [0] (nil) if str is null,
 * else return elements
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	if (current->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		count++;
		current = current->next;
	}
	return (count);
}
