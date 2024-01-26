#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers dollowed by a new line
 * @separator: separate output.
 * @n: parameter.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	/*int number;*/
	unsigned int i, number;

	 va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(ap, int);
		printf("%d", number);
		if (separator != NULL && i != number - 1)
		{
			printf("%s", separator);
		}
	}
	 va_end(ap);
	 printf("\n");
}


