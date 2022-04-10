#include <stdio.h>
/**
 * main - prints alphabets except 'q' and 'e'
 * Return: 0
 */

int main(void)
{
char alph;

 for (alph = 'a'; alph <= 'z'; alph++)
{
if (alph == 'q' || alph == 'e')
{continue; }
else
putchar(alph);
}
putchar('\n');
return (0);
}
