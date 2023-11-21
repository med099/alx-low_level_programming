#include "lists.h"

/**
 * print_listint - function that print elements in a linked listint_t list
 * @h: head of the list
 * Return: number of elment
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *now = h;

	while (now)
	{
		printf("%d\n", now->n);
		now = now->next;
		i++;
	}
	return (i);
}
