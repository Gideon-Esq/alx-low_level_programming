#include <stdio.h>
/**
 * main - print all possible combination of two two-digit numbers.
 * Return: Alway return 0 (if success)
 * OAG
 */
int main(void)
{
	int n, o, p, q;

	for (n = 48; n <= 57; n++)
	{
		for (o = 48; o <= 57; o++)
		{
			for (p = 48; p <= 57; p++)
			{
				for (q = 48; q <= 57; q++)
				{
					if (((p + q) > (n + o) && p >= n) || n < p)
					{
						putchar(n);
						putchar(o);
						putchar(' ');
						putchar(p);
						putchar(q);

						if (n + o + p + q == 227 && n == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

