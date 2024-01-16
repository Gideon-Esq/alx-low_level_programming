#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: Size of the array
 * @c: Parameter, value of array.
 *
 * Return: *create_array.
 * OAG
 * 16th January, 2024.
 */

char *create_array(unsigned int size, char c)
{
	char *create_array;
	unsigned int i = 0;

	create_array = malloc(sizeof(char) * size);
	{
		for (i = 0; i < size; i++)
		{
			create_array[i] = c;
		}
		create_array[size] = '\0';
	}
	return (create_array);
}

