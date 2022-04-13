#include "main.h"
/**
 * print_last_digit - prints the last digit of the number
 * @n: parameter
 * Return:the last digit of the number
 */

int print_last_digit(int n)
{

	n = n >= 0 ? n : n * -1;

	int last = n % 10;
	int las = last + '0';

	_putchar(las);
	return (last);
}
