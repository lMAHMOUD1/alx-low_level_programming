#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 0, 1, - 9
 *
 * Returns: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digil <= 9)
	{
		putchar(digil + 48);

		if (digil != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}
