#include "main.h"

/**
 * _memset - memory sets
 * @s: character to be included
 * @b: Character to be included
 * @n: Another character to be included
 * Description: Fill the first 'n' bytes of the memory area pointed to by 's'
 * with the constant bytes 'b'
 * Return: pointer to memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}

