#include "main.h"
/**
 * _isalpha - return 1 when c is cap or low
 *
 * Description: we are usin _putchar
 *
 * @c: check characters
 *
 * Return: (0) always
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = '0';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}

		}
	}
	return (letter);
}
