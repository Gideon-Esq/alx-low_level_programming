#include "main.h"

/**
 * _sqrt_recursion - square root of given numbers
 * @n: Number value
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int squr_fun(int n, int sq);
	int sq = 1;

	return (squr_fun(n, sq));
}

/**
 * squr_fun - square root fum
 * @n: number value
 * @sq: square value
 * Return: square root
 */

int squr_fun(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (squr_fun(n, ++sq));
	}
	else
	{
		return (-1);
	}
}


