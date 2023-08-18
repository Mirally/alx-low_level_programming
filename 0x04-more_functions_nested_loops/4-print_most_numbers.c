#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 2 || x == 4)
		{
		}
		else
		{
		_putchar('0' + x);
		}
	}
	_putchar('\n');
}
