#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int alph;
	int counter;

	counter = 0;

	while (alph < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}

		counter++;

		_putchar('\n');
	}
}
