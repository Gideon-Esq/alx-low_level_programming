#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: parameter
 * Return: 1 if n greater than 0, 0 if n is equal to 0
 * else return -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}else if (n == 0)
	{
		_putchar('0');
		return (0);
	}else {
		_putchar('_');
		return(-1);
	}

}

