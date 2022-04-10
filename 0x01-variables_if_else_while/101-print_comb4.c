#include <stdio.h>
/**
 * main - prints all posible combinations of two numbers
 * Return: 0
 */

int main(void)
{
int var1;
int var2;
int var3;

while (var3 < 10)
{var2 = 0;
while (var2 < 10)
{
var1 = 0;
while (var1 < 10)
{if (var1 != var2 && var2 != var3 && var3 < var2 && var2 < var1)
{putchar('0' + var3);
putchar('0' + var2);
putchar('0' + var1);

if (var1 + var2 + var3 != 9 + 8 + 7)
{putchar(',');
 putchar(' ');
}
}
var1++;
}
var2++;
}
var3++;
}putchar('\n');
return (0);
}
