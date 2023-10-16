#include "main.h"

/**
 * swap_int - swap the value of int a & int b
 * @a: pointer 1
 * @b: pointer 2
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	temp = *a;
	*a = *b;
	*b = temp;
}

