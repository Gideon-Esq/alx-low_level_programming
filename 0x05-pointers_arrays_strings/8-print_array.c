#include <stdio.h>
#include "main.h"

/**
 * print_array - print 'n' elements of an array of integers
 * @a: int type array pointer
 * @n: int type intege
 * Description: numbermust be seperated by ', ' snd spacse.
 * Numbershould be displayed in the case order they are srored in arrays
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}

