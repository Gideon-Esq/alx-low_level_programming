#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: The result to be printed.
 *
 * Return: 1 if success else return -1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

