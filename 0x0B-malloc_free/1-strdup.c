#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *_strdup(char *str)
{

	char *_strdup = malloc(sizeof(char) * strlen(str));
	{
		if (_strdup != NULL)
		{
			strcpy(_strdup, str);
			return(NULL);
		}
		else
		{
			return (_strdup);
		}
	}
}

