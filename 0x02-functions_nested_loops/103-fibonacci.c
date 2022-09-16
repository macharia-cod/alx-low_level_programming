#include <stdio.h>

/**
 * main - Prints the adds the even fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a1, a2, p, q;

	a1 = 1;
	a2 = 2;
	p = q = 0;
	while (p <= 4000000)
	{
		p = a1 + a2;
		a1 = a2;
		a2 = p;
		if ((a1 % 2) == 0)
		{
			q += a1;
		}
	}
	printf("%ld\n", q);
	return (0);
}
