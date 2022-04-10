#include <stdio.h>
/**
 * main - print base 16 numbes
 * Return: 0
 */

int main(void)
{
char numb;
char hex;

for (numb = 0; numb <= 9; numb++)
{
putchar(numb);
}
for (hex = 'a'; hex <= 'f'; hex++)
{
putchar(hex);
}
putchar('\n');
return (0);
}
