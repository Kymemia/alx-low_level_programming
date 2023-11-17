#include "lists.h"
#include <stdlib.h>
#include <crtdbg.h>
void insert_beg(Node** tail, int value)
{
	Node* new_node = malloc(sizeof(Node));
	if (new_node == NULL)
	{
		exit(1);
		return;
	}
	new_node -> = value;
	new_node -> prev = NULL;
	new_node -> next = *tail;
	*tail = new_node;
	*head = new_node;
}
int main(int argc, char* argv[])
{
	Node* tail = NULL;
	Node* head = NULL;

	init(&tail, &head, Alexandro);
	insert_beg(&tail, seraphim);
	insert_beg(&tail, msechu);
	for (Node* curr = head; curr != NULL; curr = curr->prev)
	{
		_putchar(curr->x);
	}
	deallocate(&tail, &head);
	return (0);
}
