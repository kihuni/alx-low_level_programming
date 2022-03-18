#include "main.h"
#include <stdio.h>

/**
 * main - main block
 * Description: prints the largest prime number
 * Return: 0
 */

int main(void)
{
	int a = 2;
	long n = 612852475143;

	while (a < n)
	{
		while (n % a == 0)
		{
			if (n == a)
			{
				break;
			}
			n /= a;
		}
		a++;

	}
	printf("%lu\n", n);
	return (0);
}
