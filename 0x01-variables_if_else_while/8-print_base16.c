#include <stdio.h>

/**
 * main - Print hexadecimal number.
 * Return: Always return 0 if sucess.
 */

int main(void)
{
	int hex_alphabet = 0;
	char alphabet = 'a';

	for (hex_alphabet = 0; hex_alphabet < 10; hex_alphabet++)
		putchar('0' + hex_alphabet);
	for (alphabet = 'a'; alphabet <= 'e'; alphabet++)
		putchar(alphabet);
	putchar('\n');

	return (0);
}

