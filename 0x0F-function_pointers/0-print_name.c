/**
 * print_name - print to STDOUT the name pass to the function
 * @name: parameter to be printed
 * @f: functionn pointer
 *
 */
#include "function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

