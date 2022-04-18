#include "main.h"

/**
 * swap_int - swaps the variables inserted
 * @a: param
 * @b: param
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
