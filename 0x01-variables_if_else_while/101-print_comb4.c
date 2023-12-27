#include <stdio.h>
/**
 * main - print all possible different combinationo of three digits.
 * Return: Always return 0 (of sucess).
 * OAG
 */

int main(void)
{
	int num = 0;
	int num1 = 0;
	int num2 = 0;

	for (num = 0; num < 10; num++)
	for (num1 = num + 1; num1 < 10; num1++)
	for (num2 = num1 + 1; num2 < 10; num2++)
	{
		putchar('0' + num);
		putchar('0' + num1);
		putchar('0' + num2);

		if (num < 7)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

