#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: the number of times the '\' char is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int a = 0, b;

	if (n > 0)
	{
		while (a < n)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
		_putchar('\n');
}
