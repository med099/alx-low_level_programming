#include "lists.h"

/**
 * sum_listint - function that calculate the sum
 *  of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
