#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string
 * @n: input var
 * Return: n value.
 */

char *leet(char *str)
{
	int x, z;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (z = 0; z < 10; z++)
		{
			if (n[x] == s1[z])
			{
				n[x] = s1[z];
			}
		}
	}
	return (n);
}
