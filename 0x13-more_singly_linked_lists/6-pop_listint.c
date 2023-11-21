#include "lists.h"

/**
 * pop_listint - function to deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the head node’s data (n),
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (n);
}
