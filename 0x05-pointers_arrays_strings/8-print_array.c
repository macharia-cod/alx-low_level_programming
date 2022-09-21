#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: input array
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int p = 0;

	for (; p < n; p++)
	{
		printf("%d", *(a + p));
		if (p != (n - 1))
			printf(", ");
	}
	printf("\n");
}
