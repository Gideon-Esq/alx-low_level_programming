#include "lists.h"
/**
 * print_listint - Print all the elements of a listint_t list.
 * @h: a pointer to the head node of listint_t linked list
 *
 * Return: count if success else return 1.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *new = h;

	while (new != NULL)
	{
		printf("%d\n", new->n);
		count++;
		new = new->next;
	}
	return (count);
}
