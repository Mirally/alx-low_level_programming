#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: char
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int x, z;
	char temp;

	for (x = 0; s[x] != '\0'; ++x)
	{
	}
	x -= 1;

	for (z = 0; z < x; z++)
	{
		temp = s[z];
		s[z] = s[x];
		s[x] = temp;
		x--;
	}
}
