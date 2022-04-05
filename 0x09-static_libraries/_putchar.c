#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 */
int _putchar(int c)
{
if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
