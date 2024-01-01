#include "main.h"
/**
 * print_alphabet - print a-z in small letters.
 * @alp: Parameters)
 */

void print_alphabet(void)
{
	char alp = 'a';

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	putchar('\n');

	return;
}
