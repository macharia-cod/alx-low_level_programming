#include "main.h"

/**
 * _islower - Prints 1 if is lowercase character. If otherwise shows 0
 *
 * Return: 1 for lowercase. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

