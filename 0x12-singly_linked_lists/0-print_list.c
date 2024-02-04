#include "lists.h"

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

