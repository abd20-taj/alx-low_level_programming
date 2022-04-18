#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: has no return value
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	char rs[i];
	int a = 0;

	while (a < i)
	{
		rs[i - a] = s[a];
		a++;
	}
	s = rs;
}
