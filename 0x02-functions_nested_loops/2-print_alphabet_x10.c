#include "main.h"
/**
 * print_alphabet_x10 - print alphabetx10
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet_x10(void)
{
	char at;
	int num = 0;

	while (num <= 9)
	{
		num++;
		for (at = 'a' ; at <= 'z' ; at++)
		{
			_putchar(at);
		}
		_putchar('\n');
	}
}
