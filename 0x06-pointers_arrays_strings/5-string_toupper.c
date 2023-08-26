#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @str: string
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			str[x] = (str[x] - 32);
		}
	}
	return (str);
}
