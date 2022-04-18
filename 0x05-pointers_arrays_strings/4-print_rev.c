#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: param
 * Return: has no return
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{	i++;
	}

	while (i)
	{
		_putchar(s[i]);
		i--; }
	_putchar('\n');
}
