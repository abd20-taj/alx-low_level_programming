#include <stdio.h>
/**
 * main - prints alphabets both in upper and lower cases
 * Return: 0
 */

int main(void)
{
char alph = 'a';
char alpha = 'A';

while (alph <= 'z')
{
putchar(alph);
alph++;
}
while (alpha <= 'Z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
