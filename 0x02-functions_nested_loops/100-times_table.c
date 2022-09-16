#include "main.h"

/**
 * print_times_table - prints n tables.
 *
 * @n: number of tables that are less than 15 and more than 0
 * Return: no return
 */
void print_times_table(int n)
{
	int a, b, z;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				z = a * b;
				_putchar(44);
				_putchar(32);
				if (z <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(z + 48);
				}
				else if (z <= 99)
				{
					_putchar(32);
					_putchar((z / 10) + 48);
					_putchar((z % 10) + 48);
				}
				else
				{
					_putchar(((z / 100) % 10) + 48);
					_putchar(((z / 10) % 10) + 48);
					_putchar((z % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}