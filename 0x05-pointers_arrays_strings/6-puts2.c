#include "main.h"

/**
 * puts2 - prints some characters of a string
 * @str: string to be manipulated
 * Return: doesn't have any
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');


}
