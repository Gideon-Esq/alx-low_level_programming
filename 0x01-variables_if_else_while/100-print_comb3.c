#include <stdio.h>
/**
 * main - print the podsible combination of two digits.
 * @num, num1: parameter
 * Return: Alway return 0 (if success)
 */

int main(void)
{
	int num = 0;
	int num1 = 1;

	for (num = 0; num < 10; num++)
	for (num1 = num + 1; num1 < 10; num1++)
	{
		putchar('0' + num);
		putchar('0' + num1);

		if (num <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

