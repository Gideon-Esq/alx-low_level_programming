#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 */

void jack_bauer(void)
{
	int j = 0;
	int a = 0;
	int c = 0;
	int k = 0;

	for (j = 0; j <= 2; j++)
	{
		for (a = 0; a <= 9; a++)
		{
			if ((j <= 1 && a <= 9) || (j <= 2 && a <= 3))
			{
				for (c = 0; c <= 5; c++)
				{
					for (k = 0; k <= 9; k++)
					{
						{
							_putchar('0' + j);
							_putchar('0' + a);
							_putchar(':');
							_putchar('0' + c);
							_putchar('0' + k);
							_putchar('\n');
						}
					}
				}
			}
		}
	}
}


