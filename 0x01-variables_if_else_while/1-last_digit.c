#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive,negative or zero.
 *
 * Return: Always 0 (success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>5)
	{
		printf("Last digit of %d is greater than 5", n);
	}
	else if (n==0)
	{
		printf("Last digit of %d is 0", n);
	}
	else if ((n<6)&&(n!=0))<S-F11>
	{
		printf("Last digit of %d is less than 6 and not 0", n);
	}
	return (0);
}
