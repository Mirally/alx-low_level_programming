#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print alphabet in lower case
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
