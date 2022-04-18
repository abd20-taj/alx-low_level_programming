#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: has no return value
 */

void rev_string(char *s)
{
	int i = 0;
	int len = 0;

	char *rs;

	while (s[i])
		len++;
	while (i >= 0)
	{
		rs[len - i] = s[i];
		i++;
	}
	s = rs;
}
