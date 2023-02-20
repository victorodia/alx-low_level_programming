#include <stdio.h>
/*
 * main - entry point for the code
 * Description -  Prints lower cases alphabets without q and e
 * return: 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar (a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}	
