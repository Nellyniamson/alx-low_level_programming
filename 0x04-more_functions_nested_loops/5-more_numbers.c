#include "main.h"

/**
 * more_numbers - entry
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, ro;

	for (ro = 0; ro < 10; i++)
	{
		for (i = 0, i <= 14, i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}

			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	{

