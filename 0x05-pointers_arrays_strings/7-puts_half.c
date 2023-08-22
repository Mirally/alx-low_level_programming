#include "main.h"
#include <stdio.h>

/**
 * puts_half -  function that prints half of a string
 * @str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	len = len / 2;

	if (len % 2 != 0)
	{
		for (; str[len] != '\0'; len++)
		{
			_putchar(str[len]);
		}
	}
	else
	{
		len += 1;
		for (; str[len] != '\0'; len++)
		{
			_putchar(str[len]);
		}
	}
	_putchar('\n');
}
