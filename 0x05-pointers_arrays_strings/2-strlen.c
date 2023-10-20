#include "main.h"

/**
 * _strlen - determine the length of a string
 * @s:  string for evaluation
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i;

	i =  0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

