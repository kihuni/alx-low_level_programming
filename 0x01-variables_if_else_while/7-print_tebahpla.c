#include <stdio.h>

/**
 * main - main block
 * Description - prints lowercase alphabet in reverse
 * using putchar
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
