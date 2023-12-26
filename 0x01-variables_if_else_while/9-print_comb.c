#include <stdio.h>

int main(void)
{
	int pc = 0;

	for (pc = 0; pc < 10; pc++)
	{
		putchar('0' + pc);
		
		if (pc < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	
	return (0);
}

