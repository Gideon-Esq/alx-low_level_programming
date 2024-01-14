#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two arguments,prints the result of the multiplcation,
 * followed by a new line.
 * @argc: arguments count
 * @argv: argument strings.
 *
 * Return: 1 if error.
 * Date: 14th January, 2024.
 */

int main(int argc, char *argv[])
{
	int count, mul;

	if (argc >= 3)
	{
		for (count = 1; count < argc; count++)
		{
			int count1 = atoi(argv[1]);
			int count2 = atoi(argv[2]);
			mul = count1 * count2;
			/**if (count != 0)*/
			{ 
				printf("%d\n", mul);
			}
		}
	}
	else
	{
		printf("Error\n");
		return(1);
	}
	return (0);
}

