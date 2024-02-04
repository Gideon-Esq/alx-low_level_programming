#include "lists.h"

/**
 * print_list - print all elements of list_t list
 * @number: Number parameter
 * @temp: swapping parameter
 * Return: member if sucessful
 */

size_t print_list(const list_t *h)
{
	size_t member;
	list_t *temp;

	member = 0;
	temp = h;

	while (temp != NULL)
	{
		member++;
		temp = temp->next;
	}
	return (member);
}

