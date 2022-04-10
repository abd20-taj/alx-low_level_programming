#include <stdio.h>
/**
 * main - print base 16 numbes
 * Return: 0
 */

int main(void)
{
unsigned char hex;

for (hex = 0x0; hex <= 0xf; hex++)
{
putchar(hex);
}
putchar('\n');
return (0);
}
