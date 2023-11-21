#include "lists.h"
/**
 * add_nodeint_end -  function that adds a new node
 *  at the end of a listint_t list
 * @head: head of the list
 * @n: number to added at list
 * Return: adress of elment or NULL if fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	while (current->next)
		current = current->next;

	current->next = new;
	return (new);
}
