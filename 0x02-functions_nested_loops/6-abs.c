#include "main.h"
/**
 * _abs - absolutr value
 * @r : the value
 * Description: review
 * Return: (0) always
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = r * (-1);
		return (r);
	}
	else
	{
		return (r);
	}
	return (0);
}
