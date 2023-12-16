#include <stdio.h>

/**
 * main- Print alphabet in reverse from 'z' to 'a'.
 * Return: Alway return 0 if success.
 */

int main(void)
{
	char alphabet = 'z';

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');

	return (0);
}

