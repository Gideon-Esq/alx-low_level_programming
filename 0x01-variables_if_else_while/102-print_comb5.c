#include <stdio.h>
/**
 * main - print all possible combination of two two-digit numbers.
 * Return: Alway return 0 (if success)
 * OAG
 */
int main(void)
{
	int n = 0;
	int o = 0;
	int p = 0;
	int q = 1;

	for (n = 0; n < 10; n++)
	for (o = 0; o <= 8; o++)
	for (p = 0; p < 10; p++)
	for (q = 0; q < 10; q++)
	{
		putchar('0' + n);
		putchar('0' + o);

		if (o < 9)
		{
			putchar(' ');
		}
		putchar('0' + p);
		putchar('0' + q);

		if (q <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

