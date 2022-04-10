#include <stdio.h>
/**
 * main - prints combination of numbers
 * Return: 0
 */

int main(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
for (j = 0; j <= 9; j++)
{putchar(j + '0');
putchar(','); }
}
return (0);
}
