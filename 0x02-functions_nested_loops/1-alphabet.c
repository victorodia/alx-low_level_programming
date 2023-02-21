#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar ('\n');
	return (0);
}
