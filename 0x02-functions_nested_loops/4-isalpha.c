#include "main.h"
/**
 * _isalpha - Checks for upper or lower case character
 * @ch: parameters
 * Return: 1 if alphabet, otherwise return 0.
 */
int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}

