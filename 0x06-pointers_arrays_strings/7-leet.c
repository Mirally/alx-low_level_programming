#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string
 * @str: null var
 * Return:(0)
 */

char *leet(char *str)
{
	int x, z;
	char at[5] = "aeotl";
	char num[5] = "43071";

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
