#include <stdio.h>

/**
 * main - This print alphabet,
 * upper-case and lower-case.
 * Return: Alway return 0 (success).
 */
int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
		putchar(ALPHABET);
	putchar('\n');

	return (0);
}

