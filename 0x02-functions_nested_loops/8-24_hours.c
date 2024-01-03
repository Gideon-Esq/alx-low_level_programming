#include "main.h"

void jack_bauer(void)
{
	char j = 0;
	char a = 0;
	char c = 0;
	char k = 0;

	for (j = 0; j <= 2; j++)
	for (a = 0; a <= 3; a++)
	for (c = 0; c <= 5; c++)
	for (k = 0; k <= 9; k++)
	{
		_putchar('0' + j);
		_putchar('0' + a);
		_putchar(':');
		_putchar('0' + c);
		_putchar('0' + k);
		_putchar('\n');
	}
	_putchar('\n');

}	

