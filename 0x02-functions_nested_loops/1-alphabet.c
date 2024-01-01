#include "main.h"
/**
 * print_alphabet - print a-z in small letters.
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

}

