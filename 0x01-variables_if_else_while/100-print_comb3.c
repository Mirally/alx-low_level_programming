#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int one;
	int two;

	for (one = 48; one <= 57; one++)
	{
		for (two = (one + 1); two <= 57; two++)
		{
			putchar (one);
			putchar (two);
		if (one != 56)
		{
			putchar (44);
			putchar (32);
		}
		}
	}
	putchar ('\n');
	return (0);
}
