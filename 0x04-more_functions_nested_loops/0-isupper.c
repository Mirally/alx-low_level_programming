#include "main.h"
#include <stdio.h>

/**
 * _isupper -  a function that checks for uppercase ch.
 * @c: variable
 * Return: Always (0)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
