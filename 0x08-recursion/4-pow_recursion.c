#include "main.h"

/**
 * _pow_recursion - print the value of x raise to pow y
 * @x: parameter 1
 * @y: parameter 2
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}

