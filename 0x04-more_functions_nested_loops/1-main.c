#include "main.h"

/**
 * _isdigit - checks wether a character is a digit or not
 * @c: testedcharacter
 * Return: 1 if it is, 0 otherwise
 */

int _isdigi(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
