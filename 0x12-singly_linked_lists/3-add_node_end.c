#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 *  at the beginning of a list_t list
 * @head: head
 * @str: string
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *next_node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	next_node = *head;
	while (next_node->next)
		next_node = next_node->next;
	next_node->next = new;
	return (*head);
}

