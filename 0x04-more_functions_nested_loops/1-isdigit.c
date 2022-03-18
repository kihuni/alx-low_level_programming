#include "main.h"

/**
 * _isdigit - checks for a digit through 0 to 9
 * @c: int type number to check
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	return (0);
}
