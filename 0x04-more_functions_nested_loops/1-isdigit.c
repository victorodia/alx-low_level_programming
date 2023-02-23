#include "main.h"

/**
 * _isdigit - Check for Digit 0 - 9
 * @c: digit to check
 * Return: 1 if success, 0 if fail
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
