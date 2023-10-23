#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: Destination for the copied item
 * @src: source of the copied item
 * @n: number of copied elements
 * Return: returns 'sest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];

		count++;
	}
	return (dest);
}

