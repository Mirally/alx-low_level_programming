#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: first int
 * @b: second int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x, z;

	x = *a;
	z = *b;
	*a = z;
	*b = x;
}
