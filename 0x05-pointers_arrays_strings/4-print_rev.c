#include "main.h"

/**
 * print_rev - prints roversed string, followed by a new line
 * @s: pointer to the string to print
 * return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putcahr('\n');
}
