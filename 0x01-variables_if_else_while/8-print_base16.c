#include <stdio.h>
/**
 * main - entry point for the code
 * Description -  Prints lower cases alphabets without q and e
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
