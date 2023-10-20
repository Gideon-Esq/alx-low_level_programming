#include "main.h"

/**
 * puts2 - print one char out o 2  string
 * @str: char array string type
 * Description: print 1st char,3rd char, 5char.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)

	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

