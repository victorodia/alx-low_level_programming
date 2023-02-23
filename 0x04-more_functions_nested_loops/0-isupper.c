#include "main.h"

/**
 * _isupper - CHeeck for Uppercase letters
 * @i: character to check
 * Return: 1 if success, 0 if fail
 */

int _isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
