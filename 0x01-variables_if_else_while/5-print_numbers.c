#include <stdio.h>
/**
 * main -  a program that prints all single digit numbers of base ten and zero
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
