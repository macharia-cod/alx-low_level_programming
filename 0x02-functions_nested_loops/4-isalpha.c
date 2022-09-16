#include "main.h"

/**
 * _isalpha - Checks if input is lowercase or uppercase.
 *
 * @c: ASCII code
 * Return: 1 for lowercase or uppercase. 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >=65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
