#include "main.h"
/**
 * print_alphabet - print a-z in small letters.
 * @alp: Parameter for the function 'print_alphabet
 * Return: Alway return 0 (if sucess)
 */

void print_alphabet(void)
{
	char alp = 'a';

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	putchar('\n');

	return;
}
