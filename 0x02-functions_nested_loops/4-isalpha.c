#include "main.h"

/**
 * _isalpha - check if the input is an alphabet
 * @c: - parameter to be checked
 * Return: 1 if true and 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else 
		return (0);
}
