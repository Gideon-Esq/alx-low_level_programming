#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[])
{
	char i;

	if (argc > -1)
	{
		for (i = 0; i < argc; i++)
		{
			int i = atoi(argv[i]);
			int add = (i + i);
			{
				printf("%d\n", add);
			}
		}
	}
	return (0);

}

