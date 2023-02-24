#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if a letter is upper
 *@c: the number to be checked
 * Return: 1 for upper letter or 0 for any other letter
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{	
	return (1);
	}
	else 
	{
	return (0);
	}
}
