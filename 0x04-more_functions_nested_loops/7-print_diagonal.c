#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: var
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int line, column;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (column = 0; column < line; column++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
