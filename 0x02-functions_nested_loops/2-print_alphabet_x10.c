#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10x
 *
 * Return: has no retun value
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int alph = 'a';

		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		i++;
	}
}
