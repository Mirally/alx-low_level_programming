#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string
 * @str: input var
 * Return: n value.
 */

char *leet(char *str)
{
	int x, z;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (z = 0; s1[x] != '\0'; z++)
		{
			if (str[x] == s1[z])
			{
				str[x] = s1[z];
			}
		}
	}
	return (str);
}
