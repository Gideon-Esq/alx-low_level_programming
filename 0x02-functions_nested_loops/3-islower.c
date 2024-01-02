#include "main.h"
/**
 * _islower - checks for lowercase character
 * @ch: function as parameter for _islower
 * Return: 1 if lower case, otherwise 0
 */
int _islower(int ch)
{

	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);

}

