#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: has no return value
 */

void rev_string(char *s)
{
	int i, n = 0, tmp = 0;

	while (s[n])
		n++;
	for (i = 0; i < n / 2; i++)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmp;
	}

}
