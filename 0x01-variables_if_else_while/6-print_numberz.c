#include <stdio.h>

/**
 * main - Print 1 to 10 using putchar.
 * Return: Always return o.
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	putchar('\n');

	return (0);
}

