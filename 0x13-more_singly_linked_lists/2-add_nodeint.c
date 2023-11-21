#include "lists.h"
/**
 * add_nodeint -  function that adds a new node
 *  at the beginning of a listint_t list
 * @head: head of the list
 * @n: number to added at list
 * Return: adress of elment or NULL if fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
