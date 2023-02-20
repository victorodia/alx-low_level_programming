#include <stdio.h>
/**
 * main - entry point for the code
 * Description -  Prints lower cases alphabets without q and e
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
			if (i != 9);
			{
				putchar(',');
				putchar(' ');
			}
		i++;
	
	}
	return (0);
}
