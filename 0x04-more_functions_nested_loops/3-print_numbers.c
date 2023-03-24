#include "main.h"

/**
 * main - print 0 _ 9
 * return: void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	_putchar('\n');
}
