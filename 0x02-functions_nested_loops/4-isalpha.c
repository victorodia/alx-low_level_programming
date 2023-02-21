#include "main.h"
/**
 * _isalpha - checks for presence of alphabet
 * @a: char to be checked
 * Return: 1 (Success) 0(Failure)
 */

int _isalpha(int a)
{
	if (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') 
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
