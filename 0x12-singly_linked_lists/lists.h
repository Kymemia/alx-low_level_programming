#include <stddef.h>
#ifndef LISTS_H
#define LISTS_H
typedef struct Node {
	int x;
	struct Node *prev;
	struct Node *next;
} Node;
typedef struct list_s {
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void init(Node** tail, Node** head, int initial_value);
void deallocate(Node** tail, Node** head);
void insert_beg(Node** tail, Node** head, int value);
#endif
