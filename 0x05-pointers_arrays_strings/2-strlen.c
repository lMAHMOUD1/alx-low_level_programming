#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}