#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reverse
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '0')
	{
		i++;
	}

	len = 1;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}

