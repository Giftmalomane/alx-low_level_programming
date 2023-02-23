#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print the numbers from 0 up to 9
 * description: prints the numbers excluding 2 and 4
 *return: the numbers from 0 up to 9
 */

void print_most_numbers(void)
{

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
