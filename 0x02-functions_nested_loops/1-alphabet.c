#include "main.h"

/**
 * print_alphabet - Prints all lowercase aplhabets.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
