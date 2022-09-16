#include "main.h"

/**
 * times_table  - Prints 9 times table.
 * Return: no return
 */
void times_table(void)
{
	int a, b, z;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			z = a * b;
			_putchar(44);
			_putchar(32);
			if (z <= 9)
			{
				_putchar(32);
				_putchar(z + 48);
			}
			else
			{
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
