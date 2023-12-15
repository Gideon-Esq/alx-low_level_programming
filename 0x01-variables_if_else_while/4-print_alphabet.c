#include <stdio.h>

/**
 * main - The function that print alphabet except 'e' and 'q'
 * return: Aleay return 9
 */

int main(void)
{
	char alphabet = 'a';

	for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if( alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
		putchar('\n');
	}
	return (0);
}

