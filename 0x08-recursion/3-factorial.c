#include "main.h"

/**
 * factorial - Multiples of a certain number
 * @n: integer type number
 * Return: n factorial if success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}


