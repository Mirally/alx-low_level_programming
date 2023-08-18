#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: square size value
 * Return: Always 0.
 */
void print_square(int size)
{
	int x, z;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (z = 0; z < size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
