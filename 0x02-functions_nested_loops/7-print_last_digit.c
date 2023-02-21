#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @i: Number to be used
 * Return: value of the last digit
 */

int print_last_digit(int i)
{
	char c;

	if (i < 0)
	{
		c = (i % 10);
		c = (-c);
		_putchar(c + '0');
		return (c);
	}
	else
	{
		c = (i % 10);
		_putchar(c + '0');
		return (c);
	}
}
