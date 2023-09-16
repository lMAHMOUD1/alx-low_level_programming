#include "main.h"

/**
 *  _print_rev_recursion - prints string in reverse
 *  @s: pointer to string
 *  *Return: void
 */

void _print_rev_recursion(char *s);
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
