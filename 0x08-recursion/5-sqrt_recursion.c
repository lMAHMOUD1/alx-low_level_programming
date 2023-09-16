#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural root of a number
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 *
 * Return: the natural square root
 */
int _sqrt(int mń, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-i);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
