#include "main.h"
/**
 * print_alphabet - print alphabets
 *
 * Return:(0) Always
 *
 */
void print_alphabet(void)
{
	char at;

	at = 'a';
	while (at <= 'z')
	{
		_putchar(at);
		at++;
	}
	_putchar('\n');
}
