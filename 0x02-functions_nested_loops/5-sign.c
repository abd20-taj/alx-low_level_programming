#include "main.h"
/**
 * print_sign - prints the sign of the number
 * @n: parameter to be processed
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	int ret;

if (n > 0)
{
	ret = 1;
	_putchar('+');
}
else if (n == 0)
{
	ret = 0;
	_putchar('0');
}
else
{
	ret = -1;
	_putchar('-');
}

return (ret);
}
