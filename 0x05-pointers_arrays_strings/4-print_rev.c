#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: param
 * Return: has no return
 */

void print_rev(char *s)
{
	int i = 0;
	int len;

	while (s[i])
		len++;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--; }
}
