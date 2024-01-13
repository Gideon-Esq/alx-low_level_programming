#include <stdio.h>
/**
 * main - print all argument received
 * @argc: argument count
 * @argv: Argument string
 *
 * Return: Alwwys return 0 of sucess.
 * Date: 13th January, 2024
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc >= 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}

