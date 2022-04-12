#include "main.h"

/**
 * _islower - checks if the character is in lowercase .
 *
 * Return: 1 if if it is in lower and 0 if it isn't
 */
int _islower(int c)
{
	int c;

	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
