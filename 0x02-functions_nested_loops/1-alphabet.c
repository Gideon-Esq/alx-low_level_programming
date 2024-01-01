#include "main.h"

void print_alphabet(void)
{
	char alp = 'a';

	for (alp = 'a'; alp < 'z'; alp++)
		putchar(alp);
	putchar('\n');

	return;
}
