#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print the numbers from 0 up to 9
 * description: prints the numbers excluding 2 and 4
 *return: the numbers from 0 up to 9
 */

void print_most_numbers(void)
{
	char c;

	for (c = '9'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
