#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 time
 */

void print_alphabet_x10(void)
{
	char i = 1;
	char a;

	while (i <= 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
