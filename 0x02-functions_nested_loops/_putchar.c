#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @ch: The character to print
 *
 * Return: On sucess 1.
 * On error, -1 is  returned, and error is set appropriately.
 */
int _putchar(int ch)
{
	return write(1, &ch, 1);

}

