#include "main.h"

/**
 * print_line - prints a line
 * @n: the variable
 * Return: 0
 */

void print_line(int n)
{
	char a;

		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
