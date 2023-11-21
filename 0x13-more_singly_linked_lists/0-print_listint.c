#include "lists.h"

/**
 * print_listint - function that print elements in a linked listint_t list
 * @h: head of the list
 * Return: number of elment
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
