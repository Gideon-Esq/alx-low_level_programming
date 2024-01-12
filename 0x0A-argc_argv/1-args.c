#include <stdio.h>
/**
 * main - print the number of the arguments passed
 * @argc: argument count
 * @argv: unused parameter
 *
 * Return: Always 0, if success.
 * Date: 12th January, 2023.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc >= 0)
	{
		printf("%d\n", argc);
	}
	return (0);
}

