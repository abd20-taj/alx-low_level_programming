#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, len, a = 0;

	while (str[i])
	{
		i++;
	}

	len = i;

	if ((len % 2) == 0)
	{
		for (a = ((len / 2)); a < len; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		len = len - 1;
		for (a = ((len / 2) + 1); a < len; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
