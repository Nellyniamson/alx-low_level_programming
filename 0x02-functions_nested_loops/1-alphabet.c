#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}

	_putchar('\n');
}
