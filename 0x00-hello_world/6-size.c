#include <stdio.h>
/**
 * main - is main block
 * Return: 0
 */
int main(void)
{
char var1;
int  var2;
long int var3;
long long int var4;
float var5;
printf("Size of a char: %lu byte(s)\n", sizeof(var1));
printf("Size of an int: %lu byte(s)\n", sizeof(var2));
printf("Size of a long int: %lu byte(s)\n", sizeof(var3));
printf("Size of a long long int: %lu byte(s)\n", sizeof(var4));
printf("Size of a float: %lu byte(s)\n", sizeof(var5));
return (0);
}
