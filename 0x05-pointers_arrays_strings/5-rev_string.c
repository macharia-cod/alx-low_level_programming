#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: no return.
 */
void rev_string(char *s)
{
	int b = 0, n, m;
	char *str, temp;

	while (b >= 0)
	{
		if (s[b] == '\0')
			break;
		b++;
	}
	str = s;

	for (n = 0; n < (b - 1); n++)
	{
		for (m = n + 1; m > 0; m--)
		{
			temp = *(str + m);
			*(str + m) = *(str + (m - 1));
			*(str + (m - 1)) = temp;
		}
	}
}
