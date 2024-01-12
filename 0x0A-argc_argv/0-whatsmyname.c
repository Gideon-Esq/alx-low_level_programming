#include <stdio.h>
/**
 * main - prints it name.
 * @argc: parameter 1.
 * @argv: parameter 2.
 *
 * Return: Always return 0, of success.
 * Date: 12th January, 2024.
 */

int main(int argc, char *argv[])
{

	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

