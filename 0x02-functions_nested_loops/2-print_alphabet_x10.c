#include "main.h"
/**
 * print_alphabet_x10- display alphabet a-z ten times.
 * @i,ch: parameters
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;

	char ch = 'a';

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}

}

