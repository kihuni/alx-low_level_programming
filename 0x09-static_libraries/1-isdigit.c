#include "main.h"

/**
* _isdigit - The function thats called
* @c: The integer used when the function is called
*
* Description: A function that identifies digit
* integer
* Return: 0 - SUCCESS
*/

int _isdigit(int c)
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
