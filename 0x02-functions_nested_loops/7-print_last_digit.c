#include "main.h"
/**
 * print_last_digit - prints tje last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The last digit of the extracted number
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == n % 10)
	{
		return (0);
	}
	else if (n < 0)
	{
		n = -n;
	}

	last_digit = n % 10;

	return (last_digit);

}

