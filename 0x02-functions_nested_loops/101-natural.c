#include <stdio.h>
/**
 * main - lists all the natural numbers below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 0, x = 0;

	while (a < 1024)
	{
		a++;
			if (a % 3 == 0 || a % 5 == 0)
		{
			x += a;
		}
	}
	printf("%d\n", x);
	return (0);
}
