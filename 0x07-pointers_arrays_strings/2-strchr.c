#include "main.h"

/**
 * _strchr - S string character
 * @s: Character array string
 * @c: Character to find
 * Return: 'NULL if char is not found esle retur. 'C'
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		 s++;
	}

	return (s + 1);
}

