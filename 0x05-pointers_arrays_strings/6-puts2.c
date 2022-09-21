#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string.
 * @str: string
 * Return: no return
 */
void puts2(char *str)
{
	int a = 0;
	
	while (a >= 0)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (a % 2 == 0)
			_putchar(str[a]);
		a++;
	}
}
