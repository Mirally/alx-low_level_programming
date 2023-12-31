#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long before = 1, after = 1, product, x;

	putchar('0' + 1);
	for (x = 0; x < 49; x++)
	{
		product = before + after;
		printf(", %li", product);
		before = after;
		after = product;
	}
	putchar('\n');
	return (0);
}
