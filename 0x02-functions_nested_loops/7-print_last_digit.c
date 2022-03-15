#include "main.h"
/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return:0 or 1
 */

int print_last_digit(int num)
{
	int lastNum;

	if (num < 0)
		lastNum = -1 * (num % 10);
	else
		lastNum = num % 10;

	_putchar(lastNum + '0');
		return (lastNum);
}
