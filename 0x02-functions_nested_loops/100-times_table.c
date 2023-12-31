#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: input var
 * Return: Always 0.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int a, b, x;

		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				x = a * b;
				if (x < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + x);
				}
				else if (x >= 10 && x < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + x / 10);
					_putchar('0' + x % 10);
				}
				else if (x >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + x / 100);
					_putchar('0' + ((x / 10) % 10));
					_putchar('0' + x % 10);
				}
			}
				_putchar('\n');
		}
	}
}
