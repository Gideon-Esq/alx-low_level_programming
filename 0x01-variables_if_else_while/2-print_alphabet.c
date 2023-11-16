#include <stdio.h>

/**
 * main - The function that print alphabet
 * Return: Always return 0.
 */

int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');

	return (0);
}

