#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @s: char
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int x, rev;

	for (x = 0; s[x] != '\0'; ++x)
	{
	}

	for (rev = x - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
