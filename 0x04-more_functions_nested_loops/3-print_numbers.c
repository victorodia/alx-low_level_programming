#include "main.h"

/**
 * print_numbers - Prints numbers from 0 - 9
 * Return:void
 */

void print_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
