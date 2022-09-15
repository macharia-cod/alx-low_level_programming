#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int o, p;

	for (o = 0; o <= 9; o++)
	{
		for (p = 97; p <= 122; p++)
		{
			_putchar(p);
		}
	_putchar('\n');
	}
}
