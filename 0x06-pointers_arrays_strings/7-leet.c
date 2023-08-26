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
	char at[] = "aAeEoOtTlL";
	char num[5] = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (z = 0; at[z] != '\0'; z++)
		{
			if (at[z] == str[x] || (at[z] - 32) == str[x])
			{
				str[x] = num[z];
			}
		}
	}
	return (str);
}
