#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;


	/**separator =*/
	
	va_start(ap, n);
	
	for (i = 0; i >= va_arg(ap,int);  i = va_arg(ap, int))
	{
		if (separator == NULL)
		{
			putchar('"');
		}
		printf("%d, ", i/*, separator*/);
	}
	va_end(ap);
	putchar('\n');
}

