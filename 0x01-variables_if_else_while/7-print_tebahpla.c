#include <stdio.h>
/**
 * main - print alphabets in reverse order
 * Return: 0
 */

int main(void)
{
char alph;

for (alph = 'z'; alph >= 'a'; alph--)
{
putchar(alph);
}
putchar('\n');
return (0);
}
