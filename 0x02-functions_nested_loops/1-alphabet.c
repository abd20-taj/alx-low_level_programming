#include "main.h"

/**
 * main - prints lowercase alphabets
 *
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
	}
	_putchar('\n');

	
}
