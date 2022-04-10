#include <stdio.h>
/**
 * main - prints numbers using 'putchar' function
 * Return: 0
 */

int main(void)
{
int numb;

for (numb = 1; numb < 10; numb++)
{
putchar(numb + '0');
}
putchar('\n');
return (0);
}
