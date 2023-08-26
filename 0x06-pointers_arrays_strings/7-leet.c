#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string
 * @p: null var
 * Return:(0)
 */

char *leet(char *p)
{
	int x, z;
	char at[10] = "aAeEoOtTlL";
	char num[10] = "4433007711";

	for (x = 0; p[x] != '\0'; x++)
	{
		for (z = 0; at[z] != '\0'; z++)
		{
			if (at[z] == p[x] || (at[z] - 10) == p[x])
			{
				p[x] = num[z];
			}
		}
	}
	return (p);
}
