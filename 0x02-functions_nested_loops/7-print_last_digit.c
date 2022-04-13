#include "main.h"
/**
 * print_last_digit - prints the last digit of the number
 * @n: parameter
 * Return:the last digit of the number
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = n * -1;
	else
		n = n;

	last = n % 10;
	_putchar('0' + last);
	return (last);
}
