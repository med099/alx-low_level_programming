#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: first element at list
 * Return: number of element at the list
*/

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
