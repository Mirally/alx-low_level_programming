#include "main.h"
/**
 * print_last_digit - print last digit
 * description: print last digits of a number
 * @r: variable
 * Return: Always (0)
 */
int print_last_digit(int r)
{
	int x = (r % 10);

	if (x < 0)
	{
		x = x * (-1);
	}
	_putchar ('0' + x);
	return (x);
}
