#include <stdio.h>
/**
 * main - entry point for the code
 * Description -  Prints lower cases alphabets without q and e
 * Return: 0
 */

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
