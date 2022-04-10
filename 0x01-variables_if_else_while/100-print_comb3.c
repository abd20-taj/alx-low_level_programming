#include <stdio.h>
/**
 * main - print combination of numbers
 * Return: 0
 */

int main(void)
{
int numb;
int number;

while (number < 10)
{
numb = 0;
while (numb < 10)
{
if (number != numb && number < numb)
{
putchar('0' + number);
putchar('0' + numb);

if (numb + number != 17)
{putchar(',');
putchar(' ');
}
}
numb++;
}
number++;
}
putchar('\n');
return (0);
}
