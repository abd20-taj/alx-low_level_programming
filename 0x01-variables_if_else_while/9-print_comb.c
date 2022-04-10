#include <stdio.h>
/**
 * main - prints combination of numbers
 * Return: 0
 */

int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(','); }
}
return (0);
}
