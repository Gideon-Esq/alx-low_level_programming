#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *@x: The number to extract the last digit from.
 *
 * Return: The last digit of a number.
 */

int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		y = -1 * (x % 10);
		_putchar(y + '0');
		return (y);
	}
	else
	{
		y = x % 10;
		_putchar(y + '0');
		return (y);
	}
}

