#include "lists.h"
#include <string.h>
/**
 * add_node - unction that adds a new node
 *  at the beginning of a list_t list
 * @head: head
 * @str: string
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
