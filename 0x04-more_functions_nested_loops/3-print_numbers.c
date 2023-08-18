#include "main.h"
#include <stdio.h>

/**
 * print_numbers -  function that prints the numbers
 * Return: Always (0)
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar('0' + x);
	}
	_putchar('\n');
}
