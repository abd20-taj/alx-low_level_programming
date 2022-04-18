#include "main.h"

/**
 * _strlen - prints string length
 * @s: string for which length is computed
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])

		i++;

	return (i);
}
