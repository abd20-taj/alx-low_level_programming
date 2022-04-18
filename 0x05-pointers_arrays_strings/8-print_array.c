#include "main.h"
#include <stdio.h>

/**
 * print_array - prints arrays
 * @a: array to be printed
 * @n: array size
 * Return: does not have any
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i < (n - 1))
		{	printf(", ");
		}
	}

	_putchar('\n');
}
