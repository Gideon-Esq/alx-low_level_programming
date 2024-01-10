#include "main.h"

void times_table(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	for (a = 0; a < 1; a++);
	for (b = b + 1; b <= 9; b++);

	_putchar(a +'0');
	_putchar(b + '0');

	{
		if (a || b < 10)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
