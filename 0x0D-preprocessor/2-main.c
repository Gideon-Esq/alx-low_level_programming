#ifndef MY_FILE_H
#define MY_FILE_H

#include <stdio.h>

#define PRINT_COMPILED_FILE __FILE__
#endif /** MY_FILE_H*/

/**
 * main - Print the name of file it compile from.
 * Return: Always return 0 if sucess
 *
 */
int main(void)
{
	printf("%s\n", PRINT_COMPILED_FILE);
	return (0);
}

