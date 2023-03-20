#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 * while using int varible
 *
 * Return: Always 0 (Success)
*/

int main(void)

	digit = 0;

	while (digit <= 9)
	{
		/*convert didgit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
