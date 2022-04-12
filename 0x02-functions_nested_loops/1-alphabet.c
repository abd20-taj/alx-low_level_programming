#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: has no return value.
 */

void print_alphabet(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
