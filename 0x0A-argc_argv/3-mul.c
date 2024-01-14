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

	if (argc >= 3)
	{
		{
			int count1 = atoi(argv[1]);
			int count2 = atoi(argv[2]);
			{ 
				printf("%d\n",count1 * count2);
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

