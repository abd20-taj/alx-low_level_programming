#include <stdio.h>
/**
 * main - prints all combinations of two numbers
 * Return: 0
 */
int main(void)
{
int num1;
int num2;
int num3;
int num4 = 0;

while (num4 < 10)
{
	num3 = 0;
	while (num3 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			num1 = 0;
			while (num1 < 10)
			{
				if (!(num4 == num1 && num3 == num2))
				{
					putchar('0' + num4);
					putchar('0' + num3);
					putchar(' ');
					putchar('0' + num2);
					putchar('0' + num1);
					if (!(num4 + num3 == 18 && num1 + num2 == 17 && num2 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				num1++;
			}
			num2++;
		}
		num3++;
	}
	num4++;
}
putchar('\n');
return (0);
}
