#include <stdio.h>

/**
 * Main - This is the entry point
 *
 * Returns always (success)
 */

int main(void)
{
	char a = 'a';
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	
	a = 'A';
	for (a= 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
